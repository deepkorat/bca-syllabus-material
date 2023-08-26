#include<stdio.h>
#define max 100

char x[max];
int top = -1;

void push(int val)
{
    if(top == max-1)
    {
        printf("\n The stack is overflow..");
        return;
    }
    top++;
    x[top] = val;
}

int pop()
{
    int tmp;
    if(top == -1)
    {
        printf("\n The stack is empty..");
        return;
    }
    tmp = x[top];
    top--;
    return tmp;
}

int main()
{
    int i,length;
    char val[max];


      printf("\n Enter the string n=> ");
      gets(val);

      length = strlen(val);

      for(i=0;i<length;i++)
      {
          push(val[i]);
      }

      for(i=0;i<length;i++)
      {
          printf("%c",pop());
      }






}
