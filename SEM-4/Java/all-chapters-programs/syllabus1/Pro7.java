/*Create a complex number class. The class should have a constructor and 
methods to add, subtract and multiply two complex numbers and to return the 
real and imaginary parts.*/

class Complex
{
  double real,img;
 
  Complex(){}
  Complex(double x,double y)
  {
    real = x;
    img = y;
  }
  
  Complex add(Complex c1,Complex c2)
  {
   Complex tmp = new Complex();
   tmp.real = c1.real + c2.real;
   tmp.img = c1.img + c2.img; 
   return tmp;
  }
 
  Complex sub(Complex s1,Complex s2)
  {
    Complex tmp = new Complex();
    tmp.real = s1.real - s2.real;
    tmp.real = s1.img +- s2.img;
    return tmp;
  }
 
  Complex mul(Complex c1,Complex c2)
  {
   Complex tmp = new Complex();
   tmp.real = (c1.real * c2.real - c1.img * c2.img);
   tmp.img  = (c1.real * c2.real + c1.img * c2.img);
   return tmp;
  }

}

class Pro7{

  public static void main(String args[]){
  Complex o1 = new Complex(1,2);
  Complex o2 = new Complex(10,20);
  Complex tmp = new Complex();
  
  tmp = tmp.add(o1,o2);
  System.out.println("sum is : "+tmp.real + " + " + tmp.img+"i");
  tmp = tmp.sub(o1,o2);
  System.out.println("sub is : "+tmp.real+"-"+tmp.img+"i");
  tmp = tmp.mul(o1,o2);
  System.out.println("Mul is : "+tmp.real+"*"+tmp.img+"i");

  }


}