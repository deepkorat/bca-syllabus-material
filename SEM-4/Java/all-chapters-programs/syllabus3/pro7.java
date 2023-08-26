import java.util.*;

class range extends Exception
{
	range(String s)
	{
		super(s);
	}
}


class p7
{
	public static void main(String[] args) {
		int []m = new int[3];
        int c = 0;
        int d = 0;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the marks of 3 subject : ");
		for(int i=0;i<m.length;i++)
		{
			m[i] = sc.nextInt();
		}

		/*System.out.println("The marks of three subject is :");
		for(int i=0;i<m.length;i++)
		{
			System.out.print(m[i] + " ");
		}*/

		try
		{
			for(int i=0;i<m.length;i++)
			{
				if(m[i] > 100)
				{
					throw new range("The marks is out of range ");
				}
				if(m[i] < 0)
				{
					throw new range("The marks is out of range ");
				}

			}

			for(int i=0;i<m.length;i++)
			{
				if(m[i] >= 40)
				{
					c++;
				}

			}
			if(c >= 3){
			System.out.println("pass");
		    }
		    else
		    {
		    	System.out.println("Fail");
		    } 

		}
		catch(range e)
		{
			System.out.println(e);
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
		}
 
       

	}
}