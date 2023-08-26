/*Write a java program to display powers of 2 i.e. 2,4,8,16 etc up to 1024 using 
bitwise operators*/

class Pro10
{
public static void main(String[] args)
{
  int p=1,i;
 for(i=0;i<10;i++)
 {
   p=p<<1;
  System.out.println(p);
 }
}

}
