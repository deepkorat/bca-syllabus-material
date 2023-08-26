/*Write a program to calculate the area of square and rectangle by overloading 
the area method.*/

class Pro6
{

  public static void main(String args[])
  {
     int l=10,w=20;
      Area obj1 = new Area();
      obj1.area(l);
      obj1.area(l,w);

  }
}

class Area{
  
  void area(int l)
  {
   System.out.println("The area of the circle is => "+(l*l));
  }
  
  void area(int l,int w)
  {
    System.out.println("The area of the circle is => "+(l*w));
  }
}