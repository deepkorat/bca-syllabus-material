/*Create two thread. One thread print ‘fybca’ 4 times and another thread print 
‘sybca’ 6 times. Set priority for both thread and when thread finished print 
‘tybca’ from main.*/

//import java.lang.*;
class ThreadA extends Thread
{
   public void run()
   {
   	try{
   	for(int i=0;i<4;i++)
    {
    	System.out.println("fybca");
    	Thread.sleep(1000);
    }
}
catch(Exception e)
{
	System.out.println(e);
   }
}
}

class ThreadB extends Thread
{
    public void run()
   {
   	try{
   	for(int i=0;i<6;i++)
    {
    	System.out.println("sybca");
    	Thread.sleep(1000);
    }
}
catch(Exception e)
{
	System.out.println(e);
   }
}
}

class pro4
{
  public static void main(String[] args) {
   ThreadA t1 = new ThreadA();
   ThreadB t2 = new ThreadB();

   t1.start();
   t2.start();
   t1.setPriority(Thread.MAX_PRIORITY);
   t2.setPriority(Thread.MIN_PRIORITY);

   try{
   	t1.join();
   	t2.join();
   }
   catch(Exception e)
   {
   	System.out.println(e);
   }

   System.out.print("TYbca");
  }
}

