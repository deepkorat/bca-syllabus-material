# -x flag check whether file executable permission or not

for i in *
do
	if [ -x $i ];
	then 
		echo $i
	else
		echo "abc..."
	fi
done
