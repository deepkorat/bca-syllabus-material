echo "---------------MENU----------------"
echo "                                    "
echo " 1. Currently Login User "
echo " 2. Operating System Name "
echo " 3. Display List of text file "
echo " 4. calender of the current year "
echo "---------------------------------- "
echo "                                   "
echo "Enter Your Choice "
read ch

case $ch in
	1)who -q;;

	2)uname;;
	
	3)ls *.txt;;
	
	4)cal;;
	
	*)"Invelid choice";;
esac
