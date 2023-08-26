// linear search

#include<stdio.h>

int main()
{
    int arr[100],i,search,max,c=0;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&max);


    for(i=0;i<max;i++)
    {
        printf("\n Enter the array element => ");
        scanf("%d",&arr[i]);
    }

    printf("\n The array elements are => ");
    for(i=0;i<max;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n Enter the search elements => ");
    scanf("%d",&search);

    for(i=0;i<max;i++)
    {
        if(search == arr[i])
        {
            printf("\n The search elements is => %d and located in => %d \n",search,i);
            c++;
        }

    }

    if(c == 0)
    {
     printf("\n The search element is not in the array.. \n");
    }
    else
    {
        printf("\n The search elements is %d time in the array",c);
    }
}
