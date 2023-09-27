#include<stdio.h>
void main()
{
    int sum=0,n,a;

    printf("enter no. :");
    scanf("%d",&n);

    while(n!=0)
    {
        a=n%10;
        sum=sum*10+a;
        n=n/10;
    }
    printf("%d",sum);
}