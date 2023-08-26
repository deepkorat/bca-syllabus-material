#include<stdio.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first = NULL,*sec = NULL;


void creat()
{
    struct node *curr,*new1;
    int n,i;

    printf("\n Enter the total number of list => ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(first == NULL)
        {
            first = (struct node *)malloc(sizeof(struct node));
            first->prev= NULL;
            curr = first;
        }
        else
        {
            curr->next = (struct node *)malloc(sizeof(struct node));
            curr->next->prev = curr;
            curr = curr->next;
        }

        printf("Enter the value => ");
        scanf("%d",&curr->data);
        curr->next = NULL;
    }
}


void display()
{
    struct node *curr;
    int key;

    printf("\n Enter your choice (1 or 2) => ");
    scanf("%d",&key);

    if(key == 1)
    {
        curr = first;
    }
    else if(key == 2)
    {
        curr = sec;
    }
    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }


    while(curr != NULL)
    {
        printf("%d-->",curr->data);
        curr = curr->next;
    }
}

void insertAfter(int val,int key)
{
    struct node *curr,*new1;

    if(first == NULL)
    {
        printf("\n Linked list is empty...");
        return;
    }

    curr = first;

    new1=(struct node *)malloc(sizeof(struct node));
    new1->prev = NULL;
    new1->next = NULL;
    new1->data = val;


   while(curr != NULL && curr->data != key)
   {
       curr = curr->next;
   }

   if(curr == NULL)
   {
       printf("\n Invalid number ...");
       return;
   }

   new1->next = curr->next;
   new1->prev = curr;
   curr->next = new1;
}
void insertBefore(int val,int n)
{
    struct node *curr,*new1,*temp;

     if(first == NULL)
    {
        printf("\n Linked list is empty...");
        return;
    }

    curr = first;

    new1=(struct node *)malloc(sizeof(struct node));
    new1->prev = NULL;
    new1->next = NULL;
    new1->data = val;

    if(first->data == n)
    {
        new1->next = first;
        curr->prev = new1;
        first = new1;
         return;
    }

    while(curr != NULL && curr->data != n)
   {
       curr = curr->next;
   }

   if(curr == NULL)
   {
       printf("\n Invalid number ...");
       return;
   }

   new1->next = curr;
   curr->prev->next = new1;
   new1->prev = curr->prev;
   curr->prev = new1;


}

void insertbeg(int val)
{
    struct node *curr,*new1;

     if(first == NULL)
    {
        printf("\n Linked list is empty...");
        return;
    }

    curr = first;

    new1=(struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->prev = NULL;
    new1->next = curr;
    curr->prev = new1;
    first = new1;

}

void insertend(int val)
{
    struct node *curr,*new1;

     if(first == NULL)
    {
        printf("\n Linked list is empty...");
        return;
    }

    curr = first;
    new1=(struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->next = NULL;

    while(curr->next != NULL)
   {
       curr = curr->next;
   }

    new1->prev = curr;
    curr->next = new1;
}
void delnode(int val)
{
 struct node *curr;

    if(first == NULL)
    {
        printf("\n LINKED LIST IS EMPTY................ \n");
        return;
    }
    curr = first;

    if(first->data == val)
    {
        first = first->next;
        first->prev = NULL;
        free(curr);

    }
        while(curr != NULL && curr->data != val)
    {
        curr = curr->next;
    }


    if(curr == NULL)
    {
        printf("\n VALUE IS DOES NOT EXIST ....");
        return;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    free(curr);
}
void delAfter(int val)
{
    struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr != NULL && curr->data != val)
    {
        curr = curr->next;
    }
    temp = curr->next;

    if(curr == NULL)
    {
        printf("\n Value does not exist......");
        return;
    }
    if(temp->next == NULL)
    {
        curr->next = NULL;
        free(temp);
        return;
    }
    curr->next = temp->next;
    temp->next->prev = curr;
    free(temp);

}
void delbefore(int val)
{

    struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    if(first->data == val)
    {
        printf("\n Value does not exist.....");
        return;
    }

    while(curr != NULL && curr->data != val)
    {
        curr = curr->next;
    }

    if(curr == NULL)
    {
        printf("\n Value does not exist......");
        return;
    }

    temp = curr->prev;

    if(temp->prev == NULL)
    {
        curr->prev  = NULL;
        first = curr;
        free(temp);
        return;
    }
   curr->prev = temp->prev;
   temp->prev->next = curr;
   free(temp);
}
void delBeg()
{
     struct node *curr;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    first = curr->next;
    curr->next->prev = NULL;
    free(curr);
}
void delEnd()
{
    struct node *curr;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr->next != NULL)
    {
        curr=curr->next;
    }
    curr->prev->next = NULL;
    free(curr);
}
void delentire()
{
   struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr != NULL)
    {
        temp = curr;
        first = curr->next;
        curr = curr->next;
        free(temp);
    }
}
void counter()
{
     struct node *curr;
     int e = 0,o = 0,t = 0;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr != NULL)
    {
        if(curr->data%2 == 0)
        {
            e++;
            t++;
        }
        else
        {
            o++;
            t++;
        }
         curr = curr->next;
    }
    printf("\n Total Even Linked list is => %d ",e);
    printf("\n Total Odd  Linked list is => %d ",o);
    printf("\n Total number of the list => %d",t);
}

void rev()
{
 struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr->next != NULL)
    {
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev = curr;
        curr = temp;
    }
    first = curr;
    curr->next = curr->prev;
}
void split(int val)
{
    struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;

    while(curr != NULL && curr->data != val)
    {
        curr = curr->next;
    }

    sec = curr->next;
    curr->next = NULL;
    sec->prev = NULL;

}
void join()
{
    struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = sec;
    sec->prev = curr;
    sec= NULL;
}

void sort()
{
 struct node *curr,*temp;

    if(first == NULL)
    {
        printf("\n Linked list is empty....");
        return;
    }
    curr=first;
}
int main()
{
    int i,ch,val,n,key;

    do{
        printf("\n *************** MENU *************** \n");
        printf("01. INSERT \n");
        printf("02. DISPLAY \n");
        printf("03. INSERT AFTER \n");
        printf("04. INSERT BEFORE \n");
        printf("05. INSERT BEGGING \n");
        printf("06. INSERT END \n");
        printf("07. DELETE \n");
        printf("08. DELETE AFTER \n");
        printf("09. DELETE BEFORE \n");
        printf("10. DELETE BEGGING \n");
        printf("11. DELETE END \n");
        printf("12. DELETE ENTIRE LIST \n");
        printf("13. SORT \n");
        printf("14. REVERCE \n");
        printf("15. SPLIT \n");
        printf("16. JOIN \n");
        printf("17. COUNTER \n");
        printf("18. EXIT \n");
        printf("--------------- ---- --------------- \n");

        printf("ENTER YOUR CHOICE => ");
        scanf("%d",&ch);

        if(ch == 1)
        {
            printf("\n YOU ARE IN CREAT FUNCTION.......... \n");
            creat();
        }
        else if(ch == 2)
        {
            printf("\n YOU ARE IN DISPLAY FUNCTION........... \n");
            display();
        }
        else if(ch == 3)
        {
            printf("\n YOU ARE IN INSERT AFTER FUNCTION ............ \n");
            printf("ENTER THE VALUE=> ");
            scanf("%d",&val);
            printf("Enter the  key => ");
            scanf("%d",&key);
            insertAfter(val,key);
        }
       else if(ch == 4)
        {
             printf("\n YOU ARE IN INSERT BEFORE FUNCTION ............ \n");
             printf("ENTER THE NUMBER WHICH YOU WANT TO INSERT BEFORE => ");
             scanf("%d",&n);
             printf("\n ENTER THE NUMBER => ");
             scanf("%d",&val);
             insertBefore(val,n);

        }
       else if(ch == 5)
        {
            printf("\n YOU ARE IN INSERT BEGGINH FUNCTION ........... \n");
            printf("Enter the number  => ");
            scanf("%d",&val);
             insertbeg(val);
       }
        else if(ch == 6)
        {
           printf("YOU ARE IN INSERT END FUNCTION ........... \n");
           printf("Enter the value => ");
           scanf("%d",&val);
           insertend(val);
        }
        else if(ch == 7)
        {
            printf("YOU ARE IN DELETE FUNCTION ............... \n");
            printf("\n ENTER THE VALUE IF YOU WANT TO DELETE => ");
            scanf("%d",&val);
            delnode(val);
        }
       else if(ch == 8)
        {
            printf("\n YOU ARE IN DELETE AFTER FUNCTION ............ \n");
            printf("ENTER THE NUMBER WHICH YOU WANT TO DELETE AFTER => ");
            scanf("%d",&val);
            delAfter(val);
        }
        else if(ch == 9)
        {
            printf("\n YOU ARE IN DELETE BEFORE FUNCTION ............ \n");
            printf("Enter the value => ");
            scanf("%d",&val);
            delbefore(val);
        }
        else if(ch == 10)
        {
            printf("\n YOU ARE IN DELETE BEGGING FUNCTION ............. \n");
            delBeg();
        }
        else if(ch == 11)
        {
            printf("\n YOU ARE IN DELETE END FUNCTION ............ \n");
            delEnd();
        }
        else if(ch == 12)
        {
            printf("\n YOU ARE IN DELETE ENTIRE FUNCTION ............... \n");
            delentire();
        }
        /*else if(ch == 13)
        {
            printf("\n YOU ARE IN SORT FUNCTION ............. \n");
            sort();
        }*/
        else if(ch == 14)
        {
            printf("\n YOU ARE IN REVERCE FUNCTION .......... \n");
            rev();
        }
        else if(ch == 15)
        {
            printf("\n YOU ARE IN SPLIT FUNCTION ..........\n");
            printf("Enter the split value => ");
            scanf("%d",&val);
            split(val);
        }
        else if(ch == 16)
        {
            printf("\n YOU ARE IN JOIN FUNCTION ........... \n");
            join();
        }
        else if(ch == 17)
        {
            printf("\n YOU ARE IN COUNTER FUNCTION ............. \n");
            counter();
        }
        else if(ch == 18)
        {
            printf(" EXIT........... \n");

        }
        else
        {
            printf("invalid");
        }
    }while(ch != 18);
}

