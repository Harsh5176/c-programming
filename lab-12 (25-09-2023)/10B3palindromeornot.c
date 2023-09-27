#include<stdio.h>
void main()
{
    int i,n,sum=0,rem;

    printf("enter no. :");
    scanf("%d",&n);
    i=n;

    while(n!=0){

        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
        if(sum==i)
        {
            printf("no. is palindrome");
        }
        else
        {
            printf("no. is not palindrome");
        }
}