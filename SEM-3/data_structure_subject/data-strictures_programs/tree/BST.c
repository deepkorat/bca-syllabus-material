#include<stdio.h>
#include<stdlib.h>

#define max 5

struct node
{
    struct node *left;
    int data;
    struct node *next;
}*root = NULL;

void create(int val)
{
    struct node *curr,*new1,*p;
    int d;

    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = val;
    new1->left = NULL;
    new1->next = NULL;

    if(root == NULL)
    {
        root = new1;
        return;
    }
    curr = root;

   while(curr != NULL)
   {
       if(val < curr->data)
       {
            p =curr;
            curr = curr->left;
            d = 0;
       }
       else if(val > curr->data)
       {
           p = curr;
           curr =curr->next;
           d = 1;
       }
       else
       {
           printf("\n Duplicate value..");
           return;
       }

   }

    if(d == 0)
    {
        p->left = new1;
    }
    else
    {
        p->next = new1;
    }
}

void inorder(struct node *r)
{
    if(r == NULL)
        return;

    inorder(r->left);
    printf("%d-->",r->data);
    inorder(r->next);
}

void preorder(struct node *r)
{
    if(r == NULL)
        return;

        printf("%d-->",r->data);
        preorder(r->left);
        preorder(r->next);
}

void postorder(struct node *r)
{
    if(r == NULL)
        return;

    postorder(r->left);
    postorder(r->next);
    printf("%d-->",r->data);
}

int main()
{
    int ch,val,value;

    do{
        printf("\n |************** MENU **************| \n");
        printf("\n 1. Insert");
        printf("\n 2. Display");
        printf("\n 3. Exit");
        printf("\n |************** **** **************| \n");

        printf("\n Enter your choice => ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n Enter the value => ");
            scanf("%d",&val);
            create(val);
            break;

        case 2:
            printf("\n |*********** Display ***********| \n");
            printf("\n 1. Inorder");
            printf("\n 2. Preorder");
            printf("\n 3. Postorder");
            printf("\n |*********** ******* ***********| \n");

            printf("\n Enter the choice => ");
            scanf("%d",&value);

            if(value == 1)
            {
                printf("\n Display In order expression \n ");
                inorder(root);
            }

           else if(value == 2)
           {
                printf("\n Display Preorder expression \n ");
                preorder(root);
           }

          else if(value == 3)
          {
                printf("\n Display Postorder expression \n");
                postorder(root);
          }

        else
        {
             printf("\n Invalid number..");
                return;

        }

        break;

            case 3:
                printf("\n Good Bye...");
                break;

            default:
                printf("\n Invalid Expression..");
                break;
        }

    }while(ch != 3);
}
