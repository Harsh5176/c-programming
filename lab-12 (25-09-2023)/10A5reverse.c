#include<stdio.h>
void main()
{
    int i=1,n,a;
    printf("enter no. :");
    scanf("%d",&n);

    while(n!=0)
    {
        a=n%10;
        printf("%d",a);
        n=n\10;
    }
}