/*Write a program that takes a string from the user and validate it. The string 
should be at least 5 characters and should contain at least one digit. Display an 
appropriate valid message*/

import java.util.*;
class validatestring extends Exception
{
	validatestring(String s)
	{
		super(s);
	}
}

class p6
{
	public static void main(String[] args) {
		
		String str;
		int l;
		
        
        Scanner sc = new Scanner(System.in);
        System .out.println("Enter the string => ");
        str = sc.nextLine();
 
       l = str.length();

       

      // System.out.println("the length of the stirng is -> "+l);
        
       try{

        int c = 0;
       	if(l < 5)
       	{
       		throw new validatestring("The string at least 5 characters");
       	}

        for(int i=0;i<str.length();i++)
       	{
       		char ch = str.charAt(i);
       		if(Character.isDigit(ch))
       		{
       			c = 1;
       		}
       	}

       	if(c != 1)
       	{
       		throw new validatestring("Your string is contain at least one digit ");
       	}

       }
       catch(validatestring e)
       {
            System.out.println(e);
       }   
       
	}
}