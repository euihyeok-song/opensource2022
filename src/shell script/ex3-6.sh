#!/bin/sh
read new
eval "ls"

newdir=~/desktop/open/shell/$new
if [ ! -d $newdir ]
then
	mkdir $newdir
fi

eval "touch ./$new/file0.txt"
eval "touch ./$new/file1.txt"
eval "touch ./$new/file2.txt"
eval "touch ./$new/file3.txt"
eval "touch ./$new/file4.txt"

eval "mkdir -p ./new/files"

eval "cd new"
eval "tar -cvf ~/desktop/open/shell/$new/files/files.tar file0.txt file1.txt file2.txt file3.txt file4.txt"
eval "cd files"
"tar -cvf files.tar -c ~/desktop/open/shell/$new/files"

