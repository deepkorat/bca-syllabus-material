echo "\nEnter First Number "
read n1
echo "\nEnter Second Number "
read n2

if [ $n1 -gt $n2 ]
then
	echo "$n1 is bigger than $n2"
else
	echo "$n2 is bigger than $n1"
fi

