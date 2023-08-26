 /*Write an applet that draw a circle divided in 6 equal parts.*/


/* <applet code="pro9.class" height=600 width=600>
   
  
</applet>*/

import java.applet.*;
import java.awt.*;

public class pro9 extends Applet 
{
	 


		public void paint(Graphics g)
		{
            
             
             g.drawOval(10,50,180,180);
             g.drawLine(100,50,100,230);
             g.drawLine(22,90,178,190);
             g.drawLine(20,190,178,90);
		}
	}
