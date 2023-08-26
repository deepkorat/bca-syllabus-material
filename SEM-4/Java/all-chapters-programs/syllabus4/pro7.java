 /*Write an applet that take 2 numbers as parameter and display their average and 
sum.
*/

/* <applet code="pro7.class" height=600 width=600>
   <param name="n1" value="20">
   <param name="n2" value="30">
</applet>*/

import java.applet.*;
import java.awt.*;

public class pro7 extends Applet 
{
	 


		public void paint(Graphics g)
		{
              int a = Integer.parseInt(getParameter("n1"));
              int b = Integer.parseInt(getParameter("n2"));
              int sum;


             

             g.drawString("sum is : "+ (a+b)+ "average is : "+((a+b)/2) ,10,20);
		}
	}
