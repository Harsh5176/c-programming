#include<stdio.h>
void main()
{
    int n,ce=0,co=0;
    printf("enter size of array :");
    scanf("%d",&n);
    
    int arr[n],i;
    
    for(i=0;i<n;i++)
    {
    printf("enter elements of array [%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    printf("count of  even no is %d\n ",ce);
    printf("count of  odd is %d ",co);
}