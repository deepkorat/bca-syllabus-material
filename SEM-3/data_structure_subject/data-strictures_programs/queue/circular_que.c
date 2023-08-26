#include<stdio.h>
#define max 300
int rear = -1;
int front = -1;
int que[max];

void addque(int val)
{
    if((front == 0 && rear == max-1) || (rear+1 == front))
    {
        printf("\n The Queue is full");
        return;
    }
    if(rear == max-1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    if(front == -1)
    {
        front++;
    }
    que[rear]= val;
}

int deque()
{
    int tmp;
    if(front == -1)
    {
        printf("\n Queue is empty..");
        return;
    }
    tmp = que[front];
    if(front == rear)
    {
        front = rear = -1;
    }
    else if(front == max-1)
    {
        front = 0;
    }
    else
        front++;

    printf("\n %d is delete",tmp);
}

void display()
{
    int i =0;
    if(front == -1)
    {
        printf("\n Queue is empty..");
        return;
    }
    if(rear >= front)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",que[i]);
        }

    }
    else
    {
        for(i=front;i<=max;i++)
        printf("%d\t",que[i]);

        for(i=0;i<=rear;i++)
        {
            printf("%d\t",que[i]);
        }
    }
}

int main()
{
    int ch,val;

    do
    {
        printf("\n ********** MENU ********** \n");
        printf("\n 1. Insert ");
        printf("\n 2. Delete ");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n ********** **** ********** \n");

        printf("\n Enter your choice => ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n You are in insert Function..... \n");
            printf("\n Enter the value => ");
            scanf("%d",&val);
            addque(val);
            break;

        case 2:
            printf("\n You are in delete function..... \n");
            deque();
            break;

        case 3:
            printf("\n You are in Display function..... \n");
            display();
            break;

        case 4:
            printf("\n GOOD BYE ...........");
            break;

        default:
            printf("\n Invalid function .. ");
            break;
        }
    }while(ch != 4);

}

