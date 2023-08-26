# Write a shell script to remove the zero sized file from the current directory
# -s flag is check whether file is empty or not
for i in *
do
	if [ -s $i ]
	then
		echo "$i - non empty file"
	else
		echo "$i - empty file deleted"
		rm $i
	fi
done
