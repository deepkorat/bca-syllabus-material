/*A shop during festival season offers a discount 10% for purchase made up to 
Rs.1,000,
12% for purchase value of Rs.1,000 or more up to Rs 1,500 and 15% for 
purchase value 
of Rs.1,500 or more. Write a program to implement the above scheme for a 
given sales 
and print out the sales and print out the sales value, discount and net amount 
payable by 
a customer. Create necessary methods and constructors*/

import java.util.Scanner;
class Pro8
{

  int amount;
  int discount,sale;
  Scanner sc = new Scanner(System.in);
  
  Pro8()
  {
   System.out.print("Enter the amount => ");
   amount = sc.nextInt();
  }
  
  void discount()
  {
     if(amount >= 500  && amount <= 1000)
     {  
         discount = (amount * 10)/100;
 	 sale = amount - discount;
     } 
     else if(amount >= 1000 && amount <= 1500)
     {
         discount = (amount * 12)/100;
         sale = amount - discount;  
     }
     else if(amount >= 1500)
     {
         discount = (amount * 15)/100;
         sale = amount - discount;  
     }
     else
     {
        System.out.println("Please enter amount up to 500");
     }
 
  }
  
  void display_bill()
  {
    System.out.println("********* BILL *********");
    System.out.println("Amount       => "+ amount);
    System.out.println("Discount     => "+ discount);
    System.out.println("Paid amount  => "+ sale);
    System.out.println("********* **** *********");
  }

  public static void main(String args[])
  {

    Pro8 obja = new Pro8();
   
    
    
    obja.discount(); 
    obja.display_bill();
    
 
  }
    
   
  

}