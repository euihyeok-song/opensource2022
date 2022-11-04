#!/bin/sh
echo "Start Program."
read choice
myFunction() {
	echo "come into the Function"
	echo `ls`
	echo "Close Program"
}
myFunction
