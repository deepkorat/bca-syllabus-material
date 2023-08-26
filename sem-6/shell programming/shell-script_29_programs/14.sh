# -e flag for file exist or not
# -x flag for file executable or not
# -o is or operation

echo "Enter file name:"
read f1

if [ -e $f1 -o -x $f1 ]
then
	echo "file exist or executable"
else
	echo "file does not exist or is not executable"
fi
