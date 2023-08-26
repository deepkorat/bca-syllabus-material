#include<stdio.h>
#include<stdlib.h>
/********** Defining Structure Node **********/
struct node
{
    int data;
    struct node *next;
} *first=NULL, *second=NULL;
/********** Create Link List ****************/
void create()
{
    struct node *curr;
    int i,val;
    printf("\nEnter Number of Nodes:");
    scanf("%d", &val);
    if(val < 1)
    {
        printf("Invalid Argument:");
        return;
    }
    for(i=1;i<=val;i++)
    {
        if(first==NULL)
        {
            first=(struct node *)malloc(sizeof(struct node));
            curr=first;
        }
        else
        {
            curr->next=(struct node *)malloc(sizeof(struct node));
            curr=curr->next;
        }
        printf("Enter Value:");
        scanf("%d", &curr->data);
        curr->next=NULL;
    }
}
/************* Display Link List *******************/
void display()
{
    struct node *curr;
    int ch;
    printf("Enter Number of Link-List to be displayed(1-2):");
    scanf("%d", &ch);
    if(ch==1)
        curr=first;
    else
        curr=second;
    if(curr==NULL)
    {
        printf("Link-List is Empty:");
        return;
    }
    //curr=first;
    while(curr!=NULL)
    {
        printf("%d-->", curr->data);
        curr=curr->next;
    }
}
/************ Insert At End ***********************/
void insatend(int val)
{
    struct node *new1, *curr;
    if(first == NULL)
    {
        printf("Link-List is Empty:");
        return;
    }
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    curr=first;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=new1;
}
/*********** Insert At begin ******************/
void insatbeg(int val)
{
    struct node *new1;
    if(first == NULL)
    {
        printf("Link-List is Empty:");
        return;
    }
     new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=first;
    first=new1;
}
/**************** Insert After ***************/
void insaft(int key, int val)
{
    struct node *curr, *new1;
    if(first==NULL)
    {
        printf("\nLink-List is Empty:");
        return;
    }
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data=val;
    new1->next=NULL;
    curr=first;
    while(curr!=NULL && curr->data!=key )
        curr=curr->next;
    if(curr==NULL)
    {
        printf("\nKey does not Exists:");
        return;
    }
    new1->next=curr->next;
    curr->next=new1;


}
/**************** Insert Before *********************/
void insbfr(int key, int val)
{
    struct node *curr, *prev, *new1;
    if(first == NULL)
    {
        printf("\nLink-List is Empty:");
        return;
    }
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data =val;
    new1->next =NULL;
    curr=first;
    if(first->data==key)
    {
        new1->next=first;
        first=new1;
        return;
    }
    while(curr!=NULL && curr->data!=key)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("\nKey does not Exists:");
        return;
    }
    prev->next=new1;
    new1->next=curr;

}
/**************** Deleting node from Link List ******/
void delnode(int val)
{
    struct node *curr, *prev;
    if(first==NULL)
    {
        printf("\nLink-List is Empty:");
        return;
    }
    curr=first;
    if(first->data==val)
    {
        first=first->next;
        free(curr);
        return;
    }
    while(curr!=NULL && curr->data != val)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("\nValue doesn't Exists:");
        return;
    }
    prev->next = curr->next;
    free(curr);
}
/*************** Sorting of the Link-List ****/
void sortlnklst()
{
    struct node *i, *j;
    int tmp;
    if(first == NULL)
    {
        printf("\nLink-List is Empty:");
        return;
    }
    i=first;
    while(i->next !=NULL)
    {
        j=i->next;
        while(j!=NULL)
        {
            if(j->data < i->data)
            {
                tmp=i->data;
                i->data=j->data;
                j->data=tmp;
            }
            j=j->next;
        }
        i=i->next;
    }
}
/****************Reversing Link-List *********/
struct node * reverselnklst(struct node *d)
{
   struct node *tmp;
   if(d->next ==NULL)
   {
       first=d;
       return d;
   }

   tmp=reverselnklst(d->next);
   tmp->next=d;
   return d;
}
/**************** Split Function *************/
void split(int val)
{
    struct node *curr, *prev;
    if(first==NULL)
    {
        printf("Link-List is Empty:");
        return;
    }
    curr=first;
    while(curr!=NULL && curr->data!=val)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
    {
        printf("\nValue does not Exists:");
        return;
    }
    second=curr;
    prev->next=NULL;
}
/**************** Join Function **************/
void join()
{
    struct node *curr;
    if(first==NULL || second ==NULL)
    {
        printf("\nJoin is not possible:");
        return;
    }
    curr=first;
    while(curr->next!=NULL)
        curr=curr->next;

    curr->next=second;
    second=NULL;
}
/**************** Main Function **************/
void main()
{
    int val, key, ch;
    struct node *tmp;
    do
    {
        printf("\n|--------MENU--------|");
        printf("\n 1. Create:");
        printf("\n 2. Display:");
        printf("\n 3. Insert At End:");
        printf("\n 4. Insert At Begin:");
        printf("\n 5. Insert After:");
        printf("\n 6. Insert Before:");
        printf("\n 7. Delete:");
        printf("\n 8. Sort:");
        printf("\n 9. Reverse:");
        printf("\n 10.Split:");
        printf("\n 11.Join:");
        printf("\n 12.Exit:");
        printf("\n|--------------------|");
        printf("\n Enter Your Choice:");
        scanf("%d", &ch);
        if(ch==1)
        {
            create();
        }
        else if(ch==2)
        {
            printf("\n");
            display();
        }
        else if(ch==3)
        {
            printf("\nEnter Value:");
            scanf("%d", &val);
            insatend(val);
        }
         else if(ch==4)
        {
            printf("\nEnter Value:");
            scanf("%d", &val);
            insatbeg(val);
        }
        else if(ch==5)
        {
            printf("\nEnter Key:");
            scanf("%d", &key);
            printf("\nEnter Value:");
            scanf("%d", &val);
            insaft(key, val);

        }
         else if(ch==6)
        {
            printf("\nEnter Key:");
            scanf("%d", &key);
            printf("\nEnter Value:");
            scanf("%d", &val);
            insbfr(key, val);

        }
        else if(ch==7)
        {
            printf("\nEnter Value to DELETE:");
            scanf("%d", &val);
            delnode(val);
        }
        else if(ch==8)
        {
            sortlnklst();
        }
        else if(ch==9)
        {
            tmp=reverselnklst(first);
            tmp->next=NULL;
        }
        else if(ch==10)
        {
            printf("\nEnter value to split:");
            scanf("%d", &key);
            split(key);
        }
        else if(ch==11)
        {
            join();
        }
        else if(ch==12)
        {
            printf("\nGood Bye:");
            break;
        }
        else
        {
            printf("\nInvalid Choice:");
        }
    }while(ch!=12);

}
