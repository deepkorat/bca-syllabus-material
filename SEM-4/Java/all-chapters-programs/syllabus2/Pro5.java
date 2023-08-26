/*Write an interface called numbers, with a method in Process(int x, int y). Write a 
class called Sum, in which the method Process finds the sum of two numbers 
and returns an int value. Write another class called Average, in which the 
Process method finds the average of the two numbers and returns an int.
*/


import java.util.*;

interface number{
	int Process(int x,int y);
}



class Pro5{

   public static void main(String args[])
   {
   	int n1,n2,add,avg;
   	Scanner sc = new Scanner(System.in);
   	System.out.print("Enter the n1 => ");
   	n1 = sc.nextInt();
   	System.out.print("Enter the n2 => ");
   	n2 = sc.nextInt();

   	sum obja = new sum();
   	ave obje = new ave();
   
      add = obja.Process(n1,n2);
      avg = obje.Process(n1,n2);
   	System.out.println("The sum of two number is => "+add);
   	System.out.println("The avg number is => "+avg);
   }
}

class sum implements number
{
	public int Process(int x,int y){
	return x + y;
}
}

class ave implements number{
	public int Process(int x,int y)
	{
		int avg;
		sum obj = new sum();
		avg = (obj.Process(x,y))/2;
		return avg;
	}
}