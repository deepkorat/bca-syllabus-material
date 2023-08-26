/*Write applets to draw the following shapes.
a. cone 
b. cylinder
c. cube*/

/* <applet code="pro6.class" height=500 width=1000></applet> */

import java.awt.*;
import java.applet.*;

public class pro6 extends Applet 
{
   public void paint(Graphics g)
   {
      g.drawString("cone",80,30);
      g.drawLine(95,50,20,160);
      g.drawLine(95,50,170,160);
      g.drawOval(20,150,150,15);

      g.drawString("cube",280,30);
      g.drawRect(280,60,100,100);
      g.drawRect(260,40,100,100);
      g.drawLine(280,60,260,40);
      g.drawLine(280,160,260,140);
      g.drawLine(380,60,360,40);
      g.drawLine(380,160,360,140);

       g.drawString("cylinder",520,30);
       g.drawOval(480,60,150,15);
       g.drawOval(480,160,150,15);
       g.drawLine(480,70,480,170);
       g.drawLine(630,70,630,170);
   }
}