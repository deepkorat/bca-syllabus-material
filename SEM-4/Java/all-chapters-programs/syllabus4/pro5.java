/*
Create an applet which draws a line, rectangle and filled circle in applet display 
area.*/

/* <applet code="pro5.class" height=500 width=500></applet> */

import java.awt.*;
import java.applet.*;

public class pro5 extends Applet 
{
   public void paint(Graphics g)
   {
   	g.drawLine(10,20,190,20);
   	g.drawString("LINE",10,40);
   	g.drawRect(10,50,200,100);
   	g.drawString("RECTANGLE",10,180);
   	g.setColor(Color.blue);
   	g.drawOval(10,200,180,180);
    g.fillOval(10,200,180,180);
    g.setColor(Color.black);
   	g.drawString("circle",10,400);

   }	
}