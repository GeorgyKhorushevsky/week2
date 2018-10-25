link week01/file.txt week10/_ex2.txt
ls -i week01/file.txt
find . -inum 59954170039392747
find . -inum 59954170039392747 -exec rm {} \;