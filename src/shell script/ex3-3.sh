#! /bin/bash
read weight height
a=`expr $height \* $height`
b=`echo "$a/10000" | bc -l`
bmi=`echo "$weight/$b" | bc -l`
if [[`echo "$bmi < 18.5"|bc -l` -eq 1]]
then
    echo "underweight"

elif [[18.5 -le $bmi] && [$bmi -le 23]]
then 
    echo "normalweight"
else
    echo "overweight"
fi
