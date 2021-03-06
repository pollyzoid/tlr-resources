#include "stdafx.h"

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>

#pragma warning(push, 0)
#include <PolyHook.hpp>
#pragma warning(pop)

#include "util.h"
#include "tlr.h"
#include "tlr_tables.h"

namespace tlr {
	typedef int(__cdecl *FindStrFunc_fn)(void * a1, char const * funcName, int args, void * a4);
	typedef int(__cdecl *PrintF_fn)(char * format, ...);
	typedef int(__cdecl *DebugPrintF_fn)(char * format, ...);
	typedef int(__cdecl *DebugPrintThing_fn)(int * argc, ...);
	typedef void(__cdecl *DebugPrint123_fn)(void * a1, wchar_t * str);
	typedef void(__cdecl *DumpSheet_fn)(int a1, int sheetIdx, int from, int to);
}

tlr_GlobalData_t *globalData;

tlr::FindStrFunc_fn oFindStrFunc;
tlr::DebugPrintF_fn oDebugPrintF;
tlr::DebugPrintThing_fn oDebugPrintThing;
tlr::DebugPrint123_fn oDebugPrint123;
tlr::DumpSheet_fn oDumpSheet;

int __cdecl hkFindStrFunc(void * a1, char const * funcName, int args, void * a4)
{
	OutputDebugStringA(funcName);
	return oFindStrFunc(a1, funcName, args, a4);
}

int __cdecl hkDebugPrintF(char * format, ...)
{
	char buffer[256];
	va_list args;
	va_start(args, format);
	vsnprintf(buffer, 256, format, args);
	OutputDebugStringA(buffer);
	va_end(args);

	return -1;
}

int currTableIdx = 0;

void __cdecl hkDebugPrint123(void * a1, wchar_t * str)
{
	//OutputDebugString(str);

	std::wostringstream fileName;
	fileName << "tables/" << std::dec << currTableIdx << L".txt";

	std::wofstream of(fileName.str());
	of << str;
	of.close();
}

int __cdecl hkDebugPrintThing(int * argc, ...)
{
	char buffer[256];
	va_list vargs;
	va_start(vargs, argc);
	int count = va_arg(vargs, int);
	int type = va_arg(vargs, int);
	int flags = va_arg(vargs, int);
	char * format = va_arg(vargs, char *);
	vsnprintf(buffer, 256, format, vargs);
	OutputDebugStringA(buffer);
	va_end(vargs);

	return -1;
}

std::shared_ptr<PLH::X86Detour> dtr_FindStrFunc;
std::shared_ptr<PLH::X86Detour> dtr_DebugPrintF;
std::shared_ptr<PLH::X86Detour> dtr_DebugPrintThing;
std::shared_ptr<PLH::X86Detour> dtr_DebugPrint123;

void hook_stuff()
{
	dtr_FindStrFunc.reset(new PLH::X86Detour);
	dtr_FindStrFunc->SetupHook(oFindStrFunc, &hkFindStrFunc);
	if (!dtr_FindStrFunc->Hook()) {
		OutputDebugString(L"hooking dtr_FindStrFunc failed\n");
	}

	dtr_DebugPrintF.reset(new PLH::X86Detour);
	dtr_DebugPrintF->SetupHook(oDebugPrintF, &hkDebugPrintF);
	if (!dtr_DebugPrintF->Hook()) {
		OutputDebugString(L"hooking dtr_DebugPrintF failed\n");
	}

	dtr_DebugPrintThing.reset(new PLH::X86Detour);
	dtr_DebugPrintThing->SetupHook(oDebugPrintThing, &hkDebugPrintThing);
	if (!dtr_DebugPrintThing->Hook()) {
		OutputDebugString(L"hooking dtr_DebugPrintThing failed\n");
	}

	dtr_DebugPrint123.reset(new PLH::X86Detour);
	dtr_DebugPrint123->SetupHook(oDebugPrint123, &hkDebugPrint123);
	if (!dtr_DebugPrint123->Hook()) {
		OutputDebugString(L"hooking dtr_DebugPrint123 failed\n");
	}
}

void dump_tables()
{
	for (int i = 0; i < 320; i++) {
		auto tbl = globalData->BaseData->MasterTable->TableData[i];
		auto thing = string_format("\n\ntable %d, rcCount: %d, rcLength: %d\n", i, tbl.RecordCount, tbl.RecordLength);
		OutputDebugStringA(thing.c_str());

		currTableIdx = i;
		oDumpSheet(NULL, i, 0, tbl.RecordCount - 1);
	}
}

void load()
{
	OutputDebugString(L">>> hi <<<\n");

	HMODULE tlr = GetModuleHandle(L"TLR.exe");

	intptr_t base = reinterpret_cast<intptr_t>(tlr);

	globalData = *reinterpret_cast<tlr_GlobalData_t**>(base + TLR_GLOBALDATA_OFFS);

	oFindStrFunc = reinterpret_cast<tlr::FindStrFunc_fn>(base + 0x765790);
	oDebugPrintF = reinterpret_cast<tlr::DebugPrintF_fn>(base + TLR_DEBUGPRINTF_OFFS);
	oDebugPrintThing = reinterpret_cast<tlr::DebugPrintThing_fn>(base + TLR_DEBUGPRINTTHING_OFFS);
	oDebugPrint123 = reinterpret_cast<tlr::DebugPrint123_fn>(base + TLR_DEBUGPRINT123_OFFS);
	oDumpSheet = reinterpret_cast<tlr::DumpSheet_fn>(base + TLR_DUMPSHEET_OFFS);

	hook_stuff();

	auto tbl = &globalData->BaseData->MasterTable->TableData[TLR_ENTRY_MONSTER_UNION];
	auto thing = string_format("table: %p, count: %d, len: %d\n", &tbl, tbl->RecordCount, tbl->RecordLength);
	OutputDebugStringA(thing.c_str());

	auto sheet = reinterpret_cast<tlr_entry_monster_union_t *>(tbl->Table);

	for (int i = 0; i < 5; i++) {
		sheet[7375 + i].km_e0_mons_label = 730;
		sheet[7375 + i].km_e0_lv_default = i * 2 + 1;
		sheet[7375 + i].km_e0_lv_max = i * 2 + 2;
	}

	auto asd = string_format("lbl: %d, lvdef: %d, lvmax: %d, hp: %d\n",
		sheet[7375].km_e0_mons_label,
		sheet[7375].km_e0_lv_default,
		sheet[7375].km_e0_lv_max,
		sheet[7375].km_e0_start_hp);
	OutputDebugStringA(asd.c_str());
}

void unload()
{
	OutputDebugString(L">>> bye <<<\n");

	dtr_DebugPrint123->UnHook();
	dtr_DebugPrintThing->UnHook();
	dtr_DebugPrintF->UnHook();
	dtr_FindStrFunc->UnHook();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		load();
		break;
	case DLL_PROCESS_DETACH:
		unload();
		break;
	}
	return TRUE;
}

