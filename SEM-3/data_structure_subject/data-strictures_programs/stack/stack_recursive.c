#include<stdio.h>
#define max 100

int x[max];
int top = -1;

void push(int val)
{
    if(top == max-1)
    {
        printf("\n The stack is underflow...");
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
        printf("\n The stack is overflow...");
        return 0;
    }
    tmp = x[top];
    top--;
    return tmp;
}

int main()
{
    int i,n;

    printf("\n Enter a number  => ");
    scanf("%d",&n);

    push(1);
    for(i=2;i<=n;i++)
    {
        push(pop()*i);
    }
    printf("%d is factorial number ..",pop());
}
