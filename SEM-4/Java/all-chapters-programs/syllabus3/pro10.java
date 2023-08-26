/*Write a program that accepts 5 even numbers from command line , if any of the 
numbers is odd then throw custom exception OddException and count such 
invalid numbers.*/

import java.util.*;

class OddException extends Exception
{
	OddException(String s)
	{
		super(s);
	}
}

class pro10
{
   public static void main(String[] args) {
   	int []a = new int[5];
   	int c = 0;

   	for(int i=0;i<a.length;i++)
   	{
   		a[i] = Integer.parseInt(args[i]);
   	}

   	System.out.print("The array elements are => ");
   	for(int i=0;i<a.length;i++)
   	{
   		System.out.print(a[i] + " ");
   	}

   	
        for(int i=0;i<a.length;i++)
        {
        	
        	try{
            	if(a[i] % 2 != 0)
        	    {
        	    	c++;
        			throw new OddException("\n odd number");
                    
        	    }
                }
   	       catch(OddException e)
   	            {
   	            	System.out.println(e.getMessage());
   	            }
        }

        System.out.println("The odd number is => "+c);
   }
}