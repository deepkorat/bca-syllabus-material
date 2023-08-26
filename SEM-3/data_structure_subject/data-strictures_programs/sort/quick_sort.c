#include<stdio.h>
int spilt(int *,int ,int);
int quicksort(int *,int,int);

int main()
{
    int a[10],n,i,lower,upper;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&n);

    lower = 0;
    upper = n-1;

    for(i=0;i<n;i++)
    {
        printf("\n Enter the array elements => ");
        scanf("%d",&a[i]);
    }

    printf("\n Before sorting array => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    quicksort(a,lower,upper);

    printf("\n After sorting array => ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

int quicksort(int *array,int l, int u)
{
    int i;

    if(u > l)
    {
        i = spilt(array,l,u);
        quicksort(array,l,i-1);
        quicksort(array,i+1,u);
    }
}

int spilt(int a[],int l,int u)
{
    int t,p,q,pivot;

    p = l+1;
    q = u;
    pivot = a[l];

    while(q >= p)
    {
        while(a[p] < pivot)
        {
            p++;
        }
        while(a[q] > pivot)
        {
            q--;
        }

        if(q > p)
        {
            t = a[p];
            a[p] = a[q];
            a[q] = t;
        }
    }

    t  = a[l];
    a[l] = a[q];
    a[q] = t;

    return q;
}

