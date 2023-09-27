#include<stdio.h>
void main()
{
    int i,n,a;

    printf("enter no. :");
    scanf("%d",&n);

    while(n!=0)
    {
        a=n%10;
        printf("%d\n",a);
        n=n/10;
    }
}