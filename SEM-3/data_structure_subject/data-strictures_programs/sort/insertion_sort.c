#include<stdio.h>

int main()
{
    int x[100],i,j,tmp,n;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter array elements => ");
        scanf("%d",&x[i]);
    }

    printf("\n The Before sorting array => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }

    for(i=1;i<n;i++)
    {
        tmp = x[i];

        for(j=i;j>0 && x[j-1]>tmp;j--)
        {
            x[j] = x[j-1];
        }
        x[j] = tmp;
    }

    printf("\n The After sorting array => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }

}
