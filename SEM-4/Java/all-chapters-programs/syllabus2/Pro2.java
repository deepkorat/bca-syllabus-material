/*Write a program to create an array to store 5 integer values. Also initialize the 
array with 5 numbers and display the array Elements in reverse order*/
 
import java.util.*;
class Pro2
{

  public static void main(String[] args)
  {
    int n;
     Scanner sc = new Scanner(System.in);
     System.out.print("Enter the length of the array => ");
    n = sc.nextInt();
    int[] no = new int [n];
    System.out.print("Enter the array elements => ");
    for(int i = 0; i<n;i++)
    {
       no[i] = sc.nextInt();
    }
    
    System.out.print("The array elements =>"); 
    for(int i=0; i<n;i++)
    {
       System.out.print(no[i]);
    }
   
    System.out.print("\nThe reverce array => ");

    for(int i=n-1;i>=0;i--)
    {
	System.out.print(no[i]);
    }
    
  }
}