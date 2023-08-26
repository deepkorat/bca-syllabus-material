/*Write a program to find sum of two matrices of 3 x3.*/

import java.util.*;
class Pro3
{

  public static void main(String args[])
  {
   
    matrix obj = new matrix();
    obj.get_data();
    obj.get_value();
    obj.sum();
  }
}

class matrix{
  
    int n1[][] = new int[3][3];
    int n2[][] = new int[3][3];
    Scanner sc = new Scanner(System.in);

    void get_data(){

    System.out.print("Enter the first matrix : \n");
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        n1[i][j] = sc.nextInt();
      }
    }
    System.out.println("--------------------------");
    System.out.print("The first matrix : \n");
    System.out.println("--------------------------");
    for(int i=0;i<3;i++)
    {
    	System.out.println();
      for(int j=0;j<3;j++)
      {
        System.out.print(n1[i][j] + " ");
      }
    }
    }

    void get_value(){
    
    System.out.print("\n Enter the second matrix : \n");
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        n2[i][j] = sc.nextInt();
      }
    }
    System.out.println("--------------------------");
    System.out.print("The second matrix : ");
    System.out.println("\n--------------------------");
    for(int i=0;i<3;i++)
    {
    	System.out.println();
      for(int j=0;j<3;j++)
      {
        System.out.print(n2[i][j] + " ");
      }
    }
    }

    void sum()
    {
    System.out.println("\n --------------------------");
     System.out.println("sum is : ");
     System.out.println("--------------------------");
    for(int i=0;i<3;i++)
    {
       System.out.println();
       for(int j=0;j<3;j++)
      {
        System.out.print((n1[i][j] + n2[i][j]) + " ");
      }
    }
    }
}