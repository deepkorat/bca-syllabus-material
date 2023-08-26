// binary search
#include<stdio.h>

int main()
{
    int x[100];
    int n,i,beg,mid,end,search,c=0;

    printf("\n Enter the total number of the array => ");
    scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            printf("\n Enter the array elements in sorting order => ");
            scanf("%d",&x[i]);
        }

        printf("\n The array elements are => ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",x[i]);
        }

        printf("\n");

        printf("\n Enter the search elements => ");
        scanf("%d",&search);

        beg = 0;
        end = n-1;

        while(beg <= end)
        {
            mid =(beg+end)/2;

            if(x[mid] == search)
            {
                printf("\n The search element is => %d and located in => %d ",search,mid+1);
                c++;
                break;
            }
            else if(x[mid] < search)
            {
                beg  = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
       if(beg > end)
      {
            printf("The value is does not exist..");
       }


}
