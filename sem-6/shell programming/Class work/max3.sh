# using and
echo "Enter value of n1 "
read n1
echo "Enter value of n2 "
read n2
echo "Enter value of n3 "
read n3

if [ $n1 -gt $n2 -a $n1 -gt $n3 ]
then
	echo "$n1 is Grater number."
elif [ $n2 -gt $n1 -a $n2 -gt $n3 ]
then
	echo "$n2 is Grater number."
else
	echo "$n3 is Grater number."
fi

# without using and

if [ $n1 -gt $n2 ]
then 
	if [ $n1 -gt $n3 ]
	then
		echo "$n1 is Grater number."
	else
		echo "$n3 is Grater number."
	fi
else
	if [ $n2 -gt $n3 ]
	then
		echo "$n2 is Grater number."
	else
		echo "$n3 is Grater number."

	fi
fi

