/*Create a class called NumberData that accept any array of the five numbers. 
Create a sub class called Numplay which provides methods for followings:
1. Display numbers entered.
2. Sum of the number.
3. Average of the numbers.
4. Maximum of the numbers.
5. Minimum of the numbers.
Create a class that provides menu for above methods. Give choice from the 
command-line argument.*/

import java.util.*; 

class NumberData{

	int [] n1 = new int[5];
     Scanner sc = new Scanner(System.in);
    NumberData()
    {
    	System.out.println("Enter the array of five size : ");
    	for(int i=0;i<5;i++)
    	{
    		n1[i] = sc.nextInt();
    	}
    }
}

class Numplay extends NumberData{
   


   void Display()
   {
   	System.out.print("The array is :");
    for(int i=0;i<5;i++)
    {
    	System.out.print(n1[i] + " ");
    }
   }

   void sum()
   {
   	int add = 0;
   	for(int i=0;i<5;i++)
   	{
   		add = n1[i] + add;
   	}
   	System.out.print("\n SUM IS => " + add + "\n");
   	
   }

   void avg()
   {
     
     float ave;
       int add = 0;
   	   for(int i=0;i<5;i++)
   	   {
   		add = n1[i] + add;
   	   }

   	   ave = add/5;
   		
     System.out.print("\n Average is : " + ave);
   }

   void maxi()
   {
   	int max = -9999;
   	for(int i=0;i<5;i++)
   	{
   		if(max < n1[i])
   		{
   			max = n1[i];
   		}
   	}
   	System.out.println("\n The Maximum number is => "+max);
   }

   void mini()
   {
   	int min = 9999;
   	for(int i=0;i<5;i++)
   	{
   		if(min > n1[i])
   		{
   			min = n1[i];
   		}
   	}
   	System.out.println("\n The Minimum number is => "+min);
   }

}

class Pro6{

	public static void main(String args[])
	{

		Numplay obja = new Numplay();
		obja.Display();
		obja.sum();
		obja.avg();
		obja.maxi();
		obja.mini();
	}

	
}