#include<stdio.h>

int main()
{
    int x[100],i,j,n,tmp;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter the array elements => ");
        scanf("%d",&x[i]);
    }

    printf("\n The Before sorting elements are => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i] > x[j])
            {
                tmp = x[j];
                x[j] = x[i];
                x[i] = tmp;
            }
        }
    }
     printf("\n The After sorting elements are => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }
}
