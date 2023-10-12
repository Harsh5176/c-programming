#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    
    int arr[n],i;
    
    for(i=0;i<n;i++)
    {
    printf("enter elements of array [%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("element of arr[%d] = %d",i,arr[i]);
        printf("\n");
    }

}