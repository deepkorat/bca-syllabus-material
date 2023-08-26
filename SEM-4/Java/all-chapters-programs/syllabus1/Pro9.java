/*A bank gives 6.5% per annum interest on deposits made in that bank. Write a 
program to calculate the total amount that a person will receive after the end of 
5 years for a deposit of Rs.5000 for compound interest. Create necessary 
methods and constructors too. */

class Bank
{
   int amount;
   double rate;
   int year;
   double interest;
   double total;

  
   Bank()
   {
     amount = 5000;
     rate = 6.5;
     year = 5;
   }
  
  void total_amount()
  {
     interest = (amount*rate*year)/100;
     total = (amount + interest);
     System.out.println("The total amount is => "+total);

  }

  public static void main(String args[])
  {
     Bank objb = new Bank();
     objb.total_amount();
 
  }
  

}