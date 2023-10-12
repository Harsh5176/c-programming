#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    
    int arr[n],i,sum=0,max,min,avg=0;
    
    for(i=0;i<n;i++)
    {
    printf("enter elements of array [%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
            max=arr[i];
        }
        else
        {
            arr[0]=arr[i];
            min=arr[i];
        }
    } 
    printf("sum of elements is %d\n",sum);
    printf("max of elements is %d\n",max);
    printf("min of elements is %d\n",min);
    printf("avg of elements is %d",avg);
}