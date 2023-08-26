


class ThreadA implements Runnable
{
	int sum = 0;
   public void run(){

    try{
    	for(int i=1;i<=10;i++)
    	{
              sum = sum + i;
    	}

    }
    catch(Exception e)
    {
    	System.out.print(e);
    }
    System.out.println("The sum is ="+sum);
    System.out.println("The avg is ="+(sum/10));
   }
}
class ThreadB implements Runnable
{
  int sum = 0;
   public void run(){

    try{
    	for(int i=11;i<=20;i++)
    	{
              sum = sum + i;
    	}

    }
    catch(Exception e)
    {
    	System.out.print(e);
    }
    System.out.println("The sum is ="+sum);
    System.out.println("The avg is ="+(sum/10));
   }
}

class pro3
{
	public static void main(String[] args) {
		Runnable s1 = new ThreadA();
		Runnable s2 = new ThreadB();

		Thread t1 = new Thread(s1);
		Thread t2 = new Thread(s2);

		t1.start();
		t2.start();

		try{
			t1.join();
			t2.join();
		}
		catch(Exception e)
		{
			System.out.print(e);
		}

		System.out.print("Task is Completed");
	}
}