#include<stdio.h>
void main()
{
    int i,n,a,last=0,first;

    printf("enter no. :");
    scanf("%d",&n);
    last=n%10;
    while(n!=0)
    {
        first=n;
        n=n/10;
        a=first+last;
    }
    printf("first + last %d + %d = %d",first,last,a);
    
}