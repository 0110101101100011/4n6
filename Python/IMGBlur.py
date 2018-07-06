import os;
import argparse;

def main():
    args = argParser()
    print(args.src)
    print(args.dst)
    blurAllPics(args.src,args.dst)


def blurAllPics(src,dst):

    src = os.path.abspath(src)
    dst = os.path.abspath(dst)


def argParser():

        parser = argparse.ArgumentParser()
        parser.add_argument('--src', required=True, action="store", dest="src", help="src directory")
        parser.add_argument('--dst', required=True, action="store", dest="dst", help="destination directory")
        return parser.parse_args()


if __name__ == '__main__':
    main()
