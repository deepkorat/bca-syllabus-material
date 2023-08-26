/*Merge sort */
#include<stdio.h>

void mrg(int *,int, int, int);
void merge_sort(int *, int, int);

void main()
{
    int x[10],i,j,k,n;
    printf("Enter Number of Elements you want to Enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Element for X[%d]",i);
        scanf("%d",&x[i]);
    }
    printf("\nArray Before Sorting:\n");
    for(i=0;i<n;i++)
        printf("\t%d",x[i]);

    merge_sort(x,0,n-1);
     printf("\nArray After Sorting:\n");
    for(i=0;i<n;i++)
        printf("\t%d",x[i]);
}
void merge_sort(int *x, int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;

        merge_sort(x,beg,mid);
        merge_sort(x,mid+1,end);

        mrg(x,beg,mid,end);
    }
}
void mrg(int *x,int beg, int mid, int end)
{
    int i=beg, j=mid+1, k=beg, temp[10];

    while((i<=mid) && (j<=end))
    {
        if(x[i]<x[j])
        {
            temp[k]=x[i];
            i++;
        }
        else
        {
            temp[k]=x[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {

        while(j<=end)
        {
            temp[k]=x[j];
            k++;
            j++;
        }
    }
    else
    {

        while(i<=mid)
        {
            temp[k]=x[i];
            i++;
            k++;
        }
    }

    for(i=beg;i<k;i++)
    {
        x[i]=temp[i];
    }
}
