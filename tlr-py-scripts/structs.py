from pathlib import Path
import csv
import re


TABLE_NAME_RE = re.compile("\d+ - (.+)")


TLR_TO_C = {
    "eGLOBAL": "int",
    "eSLONG": "signed long",
    "eULONG": "unsigned long",
    "eSSHORT": "signed short",
    "eUSHORT": "unsigned short",
    "eSCHAR": "signed char",
    "eUCHAR": "unsigned char",
    "e8bit": "unsigned char"
}


def get_types(path):
    with path.open() as f:
        rd = csv.DictReader(f, skipinitialspace=True)
        types = next(rd)
        types.popitem()
        types.popitem(last=False)
        yield types


def create_struct(path, name):
    struct = "__declspec(align(4)) struct tlr_{0}_t\n{{".format(name)
    for types in get_types(path):
        for t in types:
            struct += "\n\t{1} {0};".format(t, TLR_TO_C[types[t]])
    struct += "\n};\n"
    return struct


def main(path):
    thing = path/"237 - t_union_param.csv"
    name = re.search(TABLE_NAME_RE, thing.stem).group(1)
    print(create_struct(thing, name))


if __name__ == "__main__":
    main(Path(r"..\tables.battle\out"))
