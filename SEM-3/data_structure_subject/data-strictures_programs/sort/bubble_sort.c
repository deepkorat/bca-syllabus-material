// bubble sort

#include<stdio.h>

int main()
{
    int x[100],i,j,n,tmp;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter the array element => ");
        scanf("%d",&x[i]);
    }

    printf("\n Before sorting elements are => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j] > x[j+1])
            {
                tmp = x[j];
                x[j] = x[j+1];
                x[j+1] = tmp;
            }
        }
    }

    printf("\n After sorting array => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }
}
