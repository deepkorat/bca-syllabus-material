/*Create a package P and within that package create class PackClass which have 
method called findmax( ) which find maximum value from three numbers. Now 
import the package within another class DemoClass and now display the 
maximum number.*/

package p;

public class pro1
{
	public int findmax(int a,int b,int c)
	{
       if(a > b && a > c)
       {
       	return a;
       }
       else if(b > a && b > c)
       {
       	return b;
       }
       else
       {
       	return c;
       }
	} 
}