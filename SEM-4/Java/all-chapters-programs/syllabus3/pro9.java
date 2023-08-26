/*Write an application that converts between meters and feet. Its first command
line argument is a number and second command line argument is either 
"centimeter" or "meter". If the argument equals "centimeter" displays a string 
reporting the equivalent number of meters. If this argument equals "meters", 
display a string reporting the equivalent number of centimeter. If unit is not 
given properly then generate custom exception Unitformatexception. If first 
argument is not proper format then generate numberformatexception. 
Generate other exception as per requirements. (1 meter=100 centimeter)*/

class Unitformatexception extends Exception
{
   Unitformatexception(String s)
   {
   	super(s);
   }
}

class pro9
{
	public static void main(String[] args) {
           float value;
           String unit;
           

           value = Float.parseFloat(args[0]);
           unit = args[1];

           try{
              
              int ch,ch1;
              ch = unit.compareTo("c");
              ch1 = unit.compareTo("m");
           	  if(ch == 0)
           	  {
           	  	throw new Unitformatexception("format is not valid");
           	  }
           	  if(ch1 == 0)
           	  {
           	  	throw new Unitformatexception("format is not valid");

           	  }

           }
           catch(Unitformatexception e)
           {
           	System.out.println(e);
           }
          

           


	}
}