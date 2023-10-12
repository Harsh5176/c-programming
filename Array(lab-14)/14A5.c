#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    
    int arr[n],i,j,h=0,w=0;
    
    for(i=0;i<n;i++)
    {
    printf("enter  height [%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(170<arr[i])
        {
            h++;
        }
    }

    for(j=0;j<n;j++)
    {
    printf("enter weight [%d]:",j);
    scanf("%d",&arr[j]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]<50)
        {
            w++;
        }
    }
    printf("%d have height greater than 170\n ",h);
    printf("%d have weight less then 50 ",w);
  
}
// 200540107186@darshan.ac.in