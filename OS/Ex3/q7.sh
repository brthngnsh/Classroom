#!/bin/sh

if [ $# -ne 3 ]
then
	echo "Not Enough Arguments"
	exit 1
fi

n=0
while read line; do
	n=$((n+1))
	if [ $n -ge $1 -a  $n -le $2 ]
	then
		echo "$line"
	fi
done < $3
