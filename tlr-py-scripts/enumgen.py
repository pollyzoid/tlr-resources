from pathlib import Path
import re


sheetNameRE = re.compile(r"=============== sheet (\w+) DUMP ===============")


def get_table_and_name(path):
    for table in path.glob('*.txt'):
        with table.open() as f:
            for line in f:
                m = sheetNameRE.match(line)
                if m:
                    yield (int(table.stem), m.group(1))
                    break



def main(path):
    tbl = [t for t in get_table_and_name(path)]
    tbl.sort()

    enum = "enum TLR_TABLE\n{"
    for t in tbl:
        enum += "\n\tTLR_{} = {},".format(t[1].upper(), t[0])
    enum += "\n}\n"

    with open("enum.txt", 'w') as f:
        f.write(enum)


if __name__ == "__main__":
    main(Path(r"..\tables"))
