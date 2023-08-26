echo "Enter the name of first file:"
read f1
echo "Enter the name of second file:"
read f2
echo "Enter the name of output file:"
read op

#combine the files horizontally
paste $f1 $f2 > $op

#combine the files vertically
cat $f1 $f2 > $op

echo "File combined successfully."
