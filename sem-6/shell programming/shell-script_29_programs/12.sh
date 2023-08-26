echo "Enter file name:"
read f1

if [ -f $f1 ]
then
	echo "It is ordinary file"
	cat $f1
else
	echo "File does not exist or is not ordinary, cannnot display"
fi






