/*A car accessories shop assigns code 1 to seat covers, 2 to steering wheel covers ,
3 to car lighting and 4 for air purifiers. All other items have code 5 or more. 
While selling the goods, a sales tax of 2% to seat covers ,3% to steering wheel 
covers, 4% to car lighting, 2.5% to air purifiers and 1.2% for all other items is 
charged. A list containing the product code and price is given for making a bill. 
Write a java program using switch statements to prepare a bill.*/


import java.util.Scanner;

class Pro3{
  
    public static void main(String args[])
    {
      
     float seat_cover,Wheel_cover,car_light;
     float purifiers,other,sum;
     int ch;
     
     Scanner sc = new Scanner(System.in);
    
    
    do{
     
    System.out.println("********* MENU **********");
    System.out.println("1. Seat cover ");
    System.out.println("2. Wheel cover ");
    System.out.println("3. Car light ");
    System.out.println("4. Air purifiers ");
    System.out.println("5. Other ");
    System.out.println("6. EXIT ");
    System.out.println("********** **** **********");
  
    System.out.println("Enter your choice => ");
   ch = sc.nextInt();
    
   
     switch(ch)
     {	
	case 1:
 		System.out.println("Enter the seat cover value => ");
		 seat_cover = sc.nextFloat();
		 sum = (seat_cover * 2)/100;
    		  System.out.println("The seat cover sale text is => "+sum);
                  break;

 	case 2: 
    		
 		System.out.println("Enter the Wheel cover value => ");
		 Wheel_cover = sc.nextFloat();
		 sum = (Wheel_cover*3)/100;
    		  System.out.println("The Wheel cover sale text is => "+sum);
		  break;
	case 3:
 		System.out.println("Enter the car light value => ");
		 car_light = sc.nextFloat();
		 sum = (float)(car_light *4)/100;
    		  System.out.println("The car light sale text is => "+sum);
		  break;
   		
	case 4:
 		System.out.println("Enter the air purifiers => ");
		 purifiers = sc.nextFloat();
		 sum = (float)(purifiers*2.5)/100;
    		  System.out.println("The Wheel cover sale text is => "+sum);
		  break;

        case 5:
              System.out.println("Enter the Other => ");
		other = sc.nextFloat();
		  sum = (float)(other*1.2)/100;
    		  System.out.println("The other sale text is => "+sum);
			  break;
        case 6:
          System.out.println("Good bye......");
		  break;

       default:
             System.out.println("INVALID CHOICE ");
		  break;

     }

     }while(ch != 6);
        
    }

}