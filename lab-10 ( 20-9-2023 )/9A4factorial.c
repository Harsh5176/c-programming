#include<stdio.h>
void main()
{
    int i,n,ans=1;

    printf("enter value which you want to find  factorial : ");
    scanf("%d",&i);

    while(i>=1)
    {
        ans=ans*i;
        i--;
    }
    printf("ans = %d",ans);
    
}
