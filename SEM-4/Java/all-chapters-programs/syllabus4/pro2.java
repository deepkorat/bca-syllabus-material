/*Write a program that create and starts five threads. Each thread is instantiated 
from the same class. It executes a loop with ten iterations. Each iteration 
displays the character 'x' and sleep for 500 milliseconds. The application waits 
for all threads to complete and then display a message ‘hello’. */


class ThreadA extends Thread
{
	public void run(){
   for(int i=0;i<10;i++)
    {
    	try{
      System.out.println("x");
      Thread.sleep(500); 
      }
      catch(Exception e)
      {
      	System.out.println(e);
      } 
    }
  }
 }
class ThreadB extends Thread
{
	public void run(){
   for(int i=0;i<10;i++)
   {
      try{
      System.out.println("x");
      Thread.sleep(500); 
      }
      catch(Exception e)
      {
      	System.out.println(e);
      }
   }
  }
}
class ThreadC extends Thread
{
	public void run(){
   for(int i=0;i<10;i++)
   {
      try{
      System.out.println("x");
      Thread.sleep(500); 
      }
      catch(Exception e)
      {
      	System.out.println(e);
      }
   }
  }
}
class ThreadD extends Thread
{
	public void run(){
   for(int i=0;i<10;i++)
   {
      try{
      System.out.println("x");
      Thread.sleep(500); 
      }
      catch(Exception e)
      {
      	System.out.println(e);
      }
   }
  }
}
class ThreadE extends Thread
{
	public void run(){
   for(int i=0;i<10;i++)
   {
      try{
      System.out.println("x");
      Thread.sleep(500); 
      }
      catch(Exception e)
      {
      	System.out.println(e);
      } 
   }
  }
}
class pro2 
{
	public static void main(String[] args) {
		ThreadA t1 = new ThreadA();
		ThreadB t2 = new ThreadB();
		ThreadC t3 = new ThreadC();
		ThreadD t4 = new ThreadD();
		ThreadE t5 = new ThreadE();

		t1.start();
		t2.start();
		t3.start();
		t4.start();
		t5.start();


		try{
			t1.join();
			t2.join();
			t3.join();
			t4.join();
			t5.join();
			System.out.println("hello");
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}
}