echo "Enter value of N1"
read n1
echo "Enter value of N2"
read n2

sum=`expr $n1 + $n2`
sub=`expr $n1 - $n2`
mul=`expr $n1 \* $n2`
div=`expr $n1 / $n2`
modular=`expr $n2 % $n2`

echo "Addition of  $n1 + $n2 is $sum"
echo "Subtraction of $n1 - $n2 is $sub"
echo "Multiplication of $n1 * $n2 is $mul"
echo "Division of $n1 / $n2 is $div"
echo "Modular of $n1 % $n2 is $modular"
