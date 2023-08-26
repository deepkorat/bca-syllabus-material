echo "\nEnter value of n1"
read n
rem=`expr $n % 2`

echo "\n First method to find number is even or odd"

if test $rem -eq 0;
then
	echo "$n is even"
else
	echo "$n is odd"
fi	

echo "\n second method to find number is even or odd"

if [ $rem -eq 0 ]
then
	echo "$n is even"	
else
	echo "$n is odd"
fi

