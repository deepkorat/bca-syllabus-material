/*A motor cycle dealer sells two-wheelers to his customer on loan, which is to be 
repaid in 5 years. The dealer charges simple interest for the whole term on the 
day of giving the loan itself. The total amount is then divided by 60(months) and 
is collected as equated monthly instalment (EMI). Write a program to calculate 
the EMI for a loan of Rs. X, where X is given from command line argument. Print 
the EMI value in rupees*/


class Pro2{
 
   public static void main(String args[])
   {
     int r = 5;
     int n = 5;

     int p = Integer.parseInt(args[0]);
 
     int simple;
     simple = (p*r*n)/100;

    System.out.println("The simple intrest is => "+simple);
    
     float sum;
     sum = (float)(p+simple)/60;

     System.out.println("The emi is => "+sum);
   }

}