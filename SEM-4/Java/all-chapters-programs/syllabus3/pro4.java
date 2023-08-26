
import java.util.*;
interface Exam
{
	public Boolean pass(int mark);
}

interface Classify
{
	public String Division(int avg);
}

class result implements Exam,Classify
{
	public Boolean pass(int mark)
	{
		if(mark >=  35)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	public String Division(int avg)
	{
		if(avg >= 60 && avg <= 100)
		{
			return "First";
		}
		else if(avg >= 50 && avg < 60)
		{
            return "Second";
		}
		else
		{
			return "no division";
		}
        
	}
}
class pro4
{
	public static void main(String[] args) {
		int []m = new int[5];
		Boolean[] b = new Boolean[5];
		int mark=0,avg;
		String str;
		Scanner sc = new Scanner(System.in);
        result objr = new result();

		for(int i=0;i<m.length;i++)
		{
			System.out.print("Enter the marks of "+ (i+1) + " subject => ");
			m[i] = sc.nextInt();
		}

		for(int i=0;i<m.length;i++){

            b[i] = objr.pass(m[i]);
            if(b[i] == false)
            {
            	System.out.println("You are fails in " + (i+1) + " subject ");
            	return;
            }
            else
            {
            	mark = mark + m[i];
            }
            

		}

	     	avg = mark/5;
            str = objr.Division(avg);
            System.out.print("you are pass with " + str + " class ");
	}
}