#include<stdio.h>
#define max 100

int stack[max];
int top = -1;

void push(int val)
{
    if(top == max-1)
    {
        printf("\n The stack is overflow..");
        return;
    }
    top++;
    stack[top] = val;
}

int pop()
{
    int tmp;
    if(top == -1)
    {
        printf("\n The stack is underflow...");
        return 0;
    }
    tmp = stack[top];
    top--;
    return tmp;
}

int peep()
{
    int tmp;
    if(top == -1)
    {
        printf("\n The stack is underflow..");
        return;
    }
    tmp = stack[top];
    return tmp;
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
}



int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();

    pop();
    display();
    peep();

}
int main()
{
    int val,i,nval,ch;

    do{
        printf("\n |*************** MENU ***************| \n");
        printf("\n 1. Push");
        printf("\n 2. Display");
        printf("\n 3. Pop");
        printf("\n 4. Peep");
        printf("\n 5. Exit");
        printf("\n |*************** **** ***************| \n");

        printf("Enter your choice => ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n Enter the insert value=> ");
            scanf("%d",&val);
            push(val);
            break;

        case 2:
            display();
            break;

        case 3:
            val = pop();
            printf("\n The pop value is => %d",val);
            break;

        case 4:
            val = peep();
            printf("\n The peep value is => %d",val);
            break;

        case 5:
            printf("\n Good bye..");
            break;

        default:
            printf("\n Invalid number ..");
            break;
        }
    }while(ch != 5);
}
