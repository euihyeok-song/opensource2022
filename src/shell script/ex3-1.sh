#!/bin/sh
read count
for i in `seq -w $count`
do
	echo "Hello world"
done
