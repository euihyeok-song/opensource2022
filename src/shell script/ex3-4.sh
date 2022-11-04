#!/bin/sh
echo "is Linux fun?[yes/no]:"
read answer

case "$answer" in
	Y|Yes|YES|y|yes)
		echo "yes"
		;;
	NO|No|no|n|nonono)
		echo "no"
		;;
	*)
		echo "Enter yes or no "
esac
