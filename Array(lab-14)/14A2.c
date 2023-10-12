#include<stdio.h>
void main()
{
    int n,cp=0,cn=0;
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
        if(arr[i]>0)
        {
            cp++;
        }
        else
        {
            cn++;
        }
    }
    printf("count of  positive is %d\n ",cp);
    printf("count of  negative is %d ",cn);
}