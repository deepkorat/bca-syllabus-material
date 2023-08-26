/*Write program to create an array of company name and another array of price
quoted by the company. Fetch the company name who has quoted the lowest
amount.*/


import java.util.Scanner;
class pro4{
  public static void main(String[] args) {
    Scanner myVar = new Scanner(System.in);
    int tmp;
    System.out.print("How Many Company Name You Want To Enter... ");
    tmp=myVar.nextInt();
    company obj= new company();
    System.out.println("Enter Company Name:  ");
    System.out.println("-----------------------------");
    obj.companyName(tmp);
    System.out.println("Enter Quoted Price:   ");
    obj.priceQuoted(tmp);
    System.out.println("Lowest Price");
    obj.check(tmp);
  }
}
class company{
  private 
  String []name = new String[10];
  double []price = new double[10];
  double max=999999;
  int count;
  public
  Scanner myVar = new Scanner(System.in);
  void companyName(int n)
  {
     
    for(int i=0;i<n;i++)
    {
      name[i]=myVar.nextLine();
    }

    System.out.println("-----------------------------");
  }
  void priceQuoted(int n)
  {
    System.out.println("-----------------------------");
    
    for(int i=0;i<n;i++)
    {
      price[i]=myVar.nextDouble();
    }

    System.out.println("-----------------------------");
      
  }
  void check(int n)
  {
    System.out.println("-----------------------------");
          for(int i=0;i<n;i++)
          {
            if(price[i] < max)
            {
              max=price[i];
              count=i;
            }
          }
          for(int i=0;i<n;i++)
          {
            if(count == i)
            {
              System.out.println(name[i]+" = "+price[i]);
            }
          }
          System.out.println("-----------------------------");
  }
  
}