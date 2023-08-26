/*Write a program which takes the age of 5 persons from command line and find 
the average age of all persons. The program should handle exception if the 
argument is not correctly formatted and custom exception if the age is not 
between 1 to 100*/

class Ageexceprion extends Exception
{
	Ageexceprion(String s)
	{
		super(s);
	}
}

class pro8
{
	public static void main(String[] args) {
		int[] a = new int[5];
		int sum = 0;
		int c = 0,d = 0;
				float avg = 0;

		for(int i=0;i<a.length;i++)
		{
			a[i] = Integer.parseInt(args[i]);
		}

	/*	System.out.println("Age of five person => ");
		for(int i=0;i<a.length;i++)
		{
          System.out.print(a[i] + " ");
		}*/

		for(int i=0;i<a.length;i++)
		{
			try{
				 if(a[i] < 1)
				 {
				 	c = 1;
				 	throw new Ageexceprion("\n age is not valid");
				 }
				 if(a[i] > 100)
				 {
				 	c = 1;
				 	throw new Ageexceprion("\n age is not valid");
				 }
				 if(c == 0)
				 {
				 	sum = sum + a[i];
				 }
				 
			}
			catch(NumberFormatException e)
			{
				System.out.println(e.getMessage());
			}
			catch(Ageexceprion e)
			{
				System.out.println(e.getMessage());
			}
		} 
		        if(c == 0){
                avg = sum /5;
                System.out.println("The avg of age is => "+avg);
            }
		 
     

	}
}