#include<stdio.h>
#define max 10

int q[max];
int front = -1;
int rear = -1;


void addque(int val)
{
    if(rear == max-1)
    {
        printf("The Queue is overflow...");
        return;
    }
    rear++;
    q[rear] = val;

    if(front == -1)
    {
        front++;
    }
}


int delque()
{
    int tmp;
    if(front == -1)
    {
        printf("The Queue is underflow...");
        return 0;
    }
    tmp = q[front];
    front++;
    printf("\n The delete member is => %d",tmp);
}

void display()
{
    int i;
    for(i=0;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }
}

int main(){
    addque(10);
    addque(20);
    addque(30);
    addque(40);
    addque(50);
    display();

    delque();
    display();
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
            delque();
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
