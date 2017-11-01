from pathlib import Path
import re


sheetNameRE = re.compile(r"=============== sheet (\w+) DUMP ===============")


def main(path):
    for table in path.glob('*.txt'):
        with table.open() as f:
            nameFound = False
            newFile = None

            for line in f:
                if not nameFound:
                    m = sheetNameRE.match(line)
                    if m:
                        name = table.stem + " - " + m.group(1) + ".csv"
                        nameFound = True
                        newFile = path.joinpath("out").joinpath(name).open('w')
                else:
                    newFile.write(line)
            if newFile:
                newFile.close()


if __name__ == "__main__":
    main(Path(r"..\tablesraw"))