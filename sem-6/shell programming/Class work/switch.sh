echo "1 -date \n2 - calender \n3 - CWD"
read ch
case $ch in
	1)date;;
	2)cal;;
	3)pwd;;
	*)echo "invelid";;
esac

