import os
import hashlib
import csv

headers = ['filename', 'hash']
sha256 = hashlib.sha256()
directory = 'D:\\Forensicscripts' #insert directory
def filelist():
    #gets all file list from the DIR
    for path, subdirs, files in os.walk(directory):
        for name in files:
                file = os.path.join(path, name)
                absfile = file.replace('\\', '/')  # to get windows specific path
                fileHash(absfile)

def fileHash(file):
    with open(file, 'rb', buffering=0) as f:
        for b in iter(lambda : f.read(128*1024), b''):
            sha256.update(b)
        #print(file)
        #print("SHA256: {0}".format(sha256.hexdigest()))
        writeExcel(file,sha256.hexdigest())
def writeExcel(file, hash):
    print(file,":", hash)
    fileAndHashList = [file,hash]
    try:
        csvFile = open('hashes.csv', 'a', newline='')
    except FileNotFoundError:
        csvFile = open('hashes.csv', 'a', newline='')
    #csvFile = open('hashes.csv', 'a', newline='')
    writer = csv.writer(csvFile, delimiter=' ')
    for data in fileAndHashList:
        writer.writerow([data])







if __name__ == '__main__':
    filelist()