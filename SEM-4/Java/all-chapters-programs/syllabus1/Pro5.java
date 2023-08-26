/*
Write a program to calculate the hypotenuse of right angled triangle when other 
sides
of the triangle are given. (Hypotenuse = square root (x*x + Y *Y))*/


import java.lang.Math;
class Pro5
{
 
  public static void main(String args[])
  {
  
   double x = 10;
   double y = 10;

    double triangle;
    triangle =  Math.sqrt((x*x + y*y));
    
   System.out.println("The triangle is => "+triangle);
  
  }
}
