

class ThreadA implements Runnable
{
	int n;
   ThreadA(String s)
   {
     n = Integer.parseInt(s);
   }

   public void run()
   {
   	try
   	{
   		for(int i=0;i<n;i++)
   		{
   			if(i%2 == 1)
   			{
   				System.out.println("odd number is => "+i);
   				Thread.sleep(1000);
   			}
   		}
   		
   	}
   	catch(Exception e)
   	{
   		System.out.println(e);
   	}
   }
}

class ThreadB implements Runnable
{
 int n;
   ThreadB(String s)
   {
     n = Integer.parseInt(s);
   }

   public void run()
   {
   	try
   	{
   		for(int i=0;i<n;i++)
   		{
   			if(i%2 == 0)
   			{
   				System.out.println("Even number is => "+i);
   				Thread.sleep(1000);
   			}
   		}
   	
   	}
   	catch(Exception e)
   	{
   		System.out.println(e);
   	}
   }
}

class pro1 
{
	public static void main(String[] args) {
		String s = args[0];
		Runnable o = new ThreadA(s);
		Runnable e = new ThreadB(s);


		Thread o1 = new Thread(o);
		Thread e1 = new Thread(e);

		o1.start();
		

		try{
		o1.join();
		
	    }
	    catch(InterruptedException n){
	    	System.out.println(n);
	    }
	    e1.start();
	    try{
		e1.join();
		System.out.println("Both are completed");
	    }
	    catch(InterruptedException n){
	    	System.out.println(n);
	    }

	    
		




	}
}