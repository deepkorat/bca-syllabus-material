/*Create class calculation with an abstract method area( ). Create Rectangle and 
Triangle subclasses of calculation and find area of rectangle and triangle*/

import java.util.*;
abstract class calculation
{
	abstract void area();
}

class rect extends calculation
{
	float len,width,a;
	rect(float l,float w)
	{ 
       len = l;
       width = w; 
	}

    
    void area()
    {
      a = (len * width);
      System.out.println("The area of rectangle is : " + a); 
    }
}

class triangle extends calculation
{
    float h,b,a;
    triangle(float height,float base)
    {
    	h = height;
    	b = base;
    }
	void area()
	{
      a = (h*b)/2;
      System.out.println("The area of triangle is : " + a); 

	}
}

class main
{
	public static void main(String [] args)
	{
		float l,w,h,b;
		Scanner sc = new Scanner(System.in);
         

        System.out.println("Enter the length :");
        l = sc.nextFloat();
        System.out.println("Enter the width :");
        w =sc.nextFloat();
        rect objr = new rect(l,w);
        objr.area();

        System.out.println("Enter the Height :");
        h = sc.nextFloat();
        System.out.println("Enter the Base :");
        b = sc.nextFloat();
        triangle objt = new triangle(h,b);
        objt.area();

	}
}