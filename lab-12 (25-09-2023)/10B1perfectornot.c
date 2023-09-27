#include<stdio.h>
void main()
{
    int i=1,n,sum=0;

    printf("enter no. :");
    scanf("%d",&n);

    while(i<n){

        if(n%i==0)
        {
            sum=sum++;
        }
        i++;
    }
        if(sum==n)
        {
            printf("no. is perfect");
        }
        else
        {
            printf("no. is not perfect");
        }
}