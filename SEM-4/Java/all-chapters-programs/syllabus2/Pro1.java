/* Write a program to sort the elements of one dimensional array. Read value of 
array elements through command line argument.*/

class Pro1
{
  public static void main(String args[])
  {
     int i,j,tmp;
     int[] n1 = new int [5];
     
     for(i=0;i<n1.length;i++)
     {
      n1[i] = Integer.parseInt(args[i]);
     }  

     System.out.println("BEFORE SORTING ARRAY :");
     for(i=0;i<n1.length;i++)
     {
	System.out.print(n1[i] + " ");
     }
   
     for(i=0;i<n1.length;i++)
     {
       for(j=i;j<n1.length;j++)
       {
        if(n1[i] > n1[j])
         {
          tmp = n1[i];
 	  n1[i] = n1[j];
	  n1[j] = tmp;
         }
       }
     }

      System.out.println("\nAFTER SORTING ARRAY :");

     for(i=0;i<n1.length;i++)
     {
	System.out.print(n1[i] + " " );
     }
  }
}