/*Write a Java applet that draws a circle centred in the centre of
the applet. The radius of the circle should be passed as a parameter*/


/* <applet code="pro8.class" height=600 width=600>
   <param name="r" value="100">
  
</applet>*/

import java.applet.*;
import java.awt.*;

public class pro8 extends Applet 
{
	 


		public void paint(Graphics g)
		{
             int r1 = Integer.parseInt(getParameter("r"));


             
             g.setColor(Color.cyan);
             g.fillOval(10,50,2*r1,2*r1);
             g.drawOval(10,50,2*r1,2*r1);
		}
	}
