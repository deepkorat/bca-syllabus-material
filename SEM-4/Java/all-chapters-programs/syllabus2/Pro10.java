
abstract class vegetable
{
   String color;
   String name;

  public void toString();
}

class cabbage extends vegetable
{

   cabbage()
   {
   	name = "cabbage";
   	color = "green";
   }
   public void toString()
   {
   	System.out.println("The name of vegetable is : "+name);
   	System.out.println("The color of vegetable is : "+color);
   }
}

class carrot extends vegetable
{
	carrot()
	{
		name = "carrot";
		color = "red";
	}
 public void toString()
   {
   	System.out.println("The name of vegetable is : "+name);
   	System.out.println("The color of vegetable is : "+color);
   }
}

class potato extends vegetable
{
	potato()
	{
		name = "potato";
		color = "Brown";
	}
    public void toString()
   {
   	System.out.println("The name of vegetable is : "+name);
   	System.out.println("The color of vegetable is : "+color);
   }
}

class tomato extends vegetable
{
   public void toString()
   {
   	System.out.println("The name of vegetable is : "+name);
   	System.out.println("The color of vegetable is : "+color);
   }
}

class Pro10
{
	public static void main(String [] args)
	{
      cabbage objc = new cabbage();
      objc.toString();
      carrot objc1 = new carrot();
      objc1.toString();
      potato objp = new potato();
      objp.toString();
      tomato objt = new tomato();
      objt.toString();
	}
}