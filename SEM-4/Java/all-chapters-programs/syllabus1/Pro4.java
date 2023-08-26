/*Write a java program to scan 3 integer values from the command line argument 
and display the maximum number using conditional operator.*/


class Pro4{
  
  public static void main(String args[]){

   int x = Integer.parseInt(args[0]);
   int y  = Integer.parseInt(args[1]);
   int z = Integer.parseInt(args[2]);
   
   int maxi = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
   
   System.out.println("The maximum out of three is => " + maxi);
 }
 
}