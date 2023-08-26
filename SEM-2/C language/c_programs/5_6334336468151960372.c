#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
} *first = NULL;

void insert(int val)
{
    struct node *new1, *curr;
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    if(first==NULL)
    {
        first=new1;
        return;
    }
    curr=first;
    while(curr->next != NULL)
    {
        curr=curr->next;
    }
    curr->next=new1;


}
void display()
{
    struct node *curr;
    if(first==NULL)
    {
        printf("\nLink List is Empty:");
        return;
    }
    curr=first;
    while(curr!=NULL)
    {
        printf("%d-->", curr->data);
        curr=curr->next;
    }

}
void main()
{
    int ch, val;
    do
    {
        printf("\n|------------MENU-------------|");
        printf("\n 1. Insert:");
        printf("\n 2. Display:");
        printf("\n 3. Exit:");
        printf("\n|-----------------------------|");
        printf("\nEnter Your Choice:");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("\nEnter Any Number:");
            scanf("%d", &val);
            insert(val);
        }
        else if(ch==2)
        {
            printf("\n");
            display();
        }
        else if(ch==3)
        {
            printf("\nGood Bye:");
            break;
        }
        else
        {
            printf("\nInvalid Choice:");
        }
    }while(ch!=3);


}
