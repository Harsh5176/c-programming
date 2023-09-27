#include<stdio.h>
void main()
{
    int i=2,n=0,count=1;

    printf("enter no. :");
    scanf("%d",&n);

    while(i<n){

        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    printf("%d ",count);
        if(count==1)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");

        }
   
}