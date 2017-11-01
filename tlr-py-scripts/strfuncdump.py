# does things

from os import path

BASE_PATH = r".."


def write_lines(name, lines):
    with open(path.join(BASE_PATH, name), 'w') as f:
        for l in lines:
            f.write('MakeName(0x{0}, "ptlr_{1}");\n'.format(*l))


def str_lines(name):
    with open(path.join(BASE_PATH, name)) as f:
        for line in f:
            yield line[27:].strip()


def find_and_del_full_str(full_strs, partial):
    for str in full_strs:
        if str.startswith(partial):
            full_strs.remove(str)
            return str
    print(partial)


def str_funcs(name, full_strs):
    with open(path.join(BASE_PATH, name)) as f:
        prev_name = None
        for line in f:
            line = line.strip()
            if 'offset sub_' in line:
                fadr = line[45:]
                yield (fadr, prev_name)
                #yield (fadr, find_and_del_full_str(full_strs, prev_name))
            elif '"' in line:
                prev_name = line.split('"')[1]


def main():
    full_strs = [l for l in str_lines("strfuncs_dump.txt")]
	# write_lines("out_strf.txt", str_funcs('strfuncs_funcs_dump.txt', full_strs))
    write_lines('out_pf.txt', str_funcs('progfuncs_dump.txt', full_strs))


if __name__ == "__main__":
    main()
