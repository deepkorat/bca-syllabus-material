#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

void push(int val)
{
    struct node *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = top;

    top = new1;
    if(new1 == NULL)
    {
        printf("\n Stack is overflow..");
        return;
    }
}

void pop()
{
    int tmp;
     struct node *curr;

     if(top == NULL)
     {
         printf("\n The stack is empty..");
         return;
     }
     curr = top;
     tmp = top->data;
     top = curr->next;
     free(curr);
     printf("\n Delete value is => %d",tmp);
}

void peep()
{
    int tmp;
    if(top == NULL)
    {
        printf("\n Stack is underflow..");
        return;
    }
    tmp = top->data;
    printf("\n The peep value => %d",tmp);
}

int main()
{
    int val,ch;

    do{
        printf("\n |*************** MENU ***************| \n");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peep");
        printf("\n 4. Exit");
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
            pop();
           break;

        case 3:
             peep();
            break;

        case 4:
            printf("\n Good bye..");
            break;

        default:
            printf("\n Invalid number ..");
            break;
        }
    }while(ch != 4);
}
