// singly link list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first = NULL;

void create()
{
    struct node *curr;

    int i,val;

    printf("\n Enter the node number => ");
    scanf("%d",&val);

    if(val < 1)
    {
        printf("\n Invalid Number");
        return;
    }

    for(i=1;i<=val;i++)
    {
        if(first == NULL)
        {
            first = (struct node *)malloc(sizeof(struct node));
            curr = first;
        }
        else
        {
            curr->next = (struct node *)malloc(sizeof(struct node));
            curr = curr->next;
        }
        printf("Enter the value : ");
        scanf("%d",curr->data);
        curr->next = NULL;
    }
}

void display()
{
    struct node *curr;

    if(first == NULL)
    {
        printf("\n The link list is empty...");
        return;
    }
    curr = first;

    while(curr->next != NULL)
    {
        printf("%d-->",curr->data);
        curr = curr->next;
    }
}

int main()
{
    int i,val;

    do
    {
        printf("\n |************** MENU **************| \n");
        printf("\n 1. Insert");
        printf("\n 2. Display");
        printf("\n 3. Exit");
        printf("\n |************** **** **************| \n");

        printf("\n Enter your choice => ");
        scanf("%d",&i);

        switch(i)
        {
        case 1:
            printf("\n You are in insert function...");
            create();
            break;

        case 2:
            printf("\n You are in Display... \n");
            display();
            break;

        case 3:
            printf("\n Good Bye...");
            break;

        default:
            printf("\n Invalid number ..");
        }

    }while(i != 3);
}
