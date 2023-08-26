/*Write a Java program to input n integer numbers and display lowest and second 
lowest number. Also handle the different exceptions possible to be thrown 
during execution*/

import java.util.*;

class p5
{
	public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
		int n;
		int min = 9999;
		int m = 0;

		System.out.println("Enter the total array number => ");
        n = sc.nextInt();

		int []a = new int[n];
		System.out.print("Enter the array elements = ");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
  
       try{
       	if(n > 20)
       	{
       		throw new ArrayIndexOutOfBoundsException("Size is out of bound");
       	}
       
    
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
        System.out.print(e);
        }


         for(int i=0;i<n;i++)
        {
        	if(a[i] < min)
        	{
        		m = min;
        		min = a[i];
        	}
        }
        System.out.println("the lowest no is : "+min);
        System.out.println("the second lowest no  is : "+m);
	}
}