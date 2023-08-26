/* Write an applet that draw a rectangle divided in 5 equal parts.*/

/* <applet code="pro10.class" height=500 width=500></applet> */

import java.applet.*;
import java.awt.*;

public class pro10 extends Applet
{
	public void init()
	{
		setBackground(Color.blue);
	}
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
	    g.fillRect(50,10,200,350);
		g.drawRect(50,10,200,350);
		g.setColor(Color.black);
		g.drawLine(50,80,250,80);
		g.drawLine(50,150,250,150);
		g.drawLine(50,220,250,220);
		g.drawLine(50,290,250,290);
	

	}
}