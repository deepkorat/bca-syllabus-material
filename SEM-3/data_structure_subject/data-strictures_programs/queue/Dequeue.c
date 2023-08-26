#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*front = NULL,*rear = NULL;


int addque(int val)
{
    struct node *new1;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;
    new1->prev = NULL;

    if(front == NULL)
    {
        front = rear = new1;
    }

    rear->next = new1;
    new1->prev = rear;
    rear = new1;

    if(rear->next == NULL)
    {
        rear->next = front;
        front->prev = rear;
    }
}

void display()
{
    struct node *curr;

    if(front == NULL)
    {
        printf("\n The queue is empty...");
        return;
    }
    curr = front;

    while(curr != rear)
    {
        printf("%d-->",curr->data);
        curr = curr->next;
    }
}
int delque()
{
    int tmp;
    if(front == rear)
    {
        printf("\n Queue is empty..");
        return;
    }
    tmp = addque(front);

    if(front == rear)
    {
        front = rear= -1;
    }
    else if(front == max-1)
    {
        front = 0;
    }
    else
        front++;

    printf("\n The delete queue is => %d",tmp);
}
int main()
{
    int val,ch;

    do{
        printf("\n **************** MENU **************** \n");
        printf("\n 1. Insert ");
        printf("\n 2. Display");
        printf("\n 3. Delete ");
        printf("\n 4. Exit");
        printf("\n **************** **** **************** \n");

        printf("\n Enter your choice => ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n You are in insert function ...");
            printf("\n Enter the value => ");
            scanf("%d",&val);
            addque(val);
            break;

        case 2:
            printf("\n You are in display function ... \n ");
            display();
            break;

        case 3:
            printf("\n You are in delete function ...");
          val = delque();
          printf("\n The delete value is => %d",val);

            break;

        case 4:
            printf("\n Good bye....");
            break;

        default :
            printf("\n Invalid number....");
            break;
        }
    }while(ch != 4);
}

