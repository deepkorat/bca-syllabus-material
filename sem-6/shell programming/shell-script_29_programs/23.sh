# Write a shell script to get all files of home directory and rename them if their 
# names start with c.
# Newname = oldname111

for i in c*
do
	if [ -f $i ]
	then
		mv "$i" "${i}111"
		echo "Renamed $i to ${i}"
	fi
done
