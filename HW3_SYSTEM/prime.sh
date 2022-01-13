#1/bin/sh
echo -n "Enter the value of n: "
read number
i=2
count=0
element=2
flag=0

echo -n "First $number prime numbers are: "
while [ $count -lt $number ]
do
i=2
flag=0
while [ $i -lt $element ]
do
if [ `expr $element % $i` -eq 0 ]
then
flag=1
break
fi
i=`expr $i + 1`
done
if [ $flag -ne 1 ]
then
count=`expr $count + 1`
echo -n "$element "
fi
element=`expr $element + 1`
done
echo ""
