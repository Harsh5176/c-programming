#include<stdio.h>
void main()
{
    int n,ans=1;

    printf("enter value which you want to find  factorial : ");
    scanf("%d",&n);

    for(;n>=1;n--)
    {
        ans=ans*n;
    
    }
    printf("ans = %d",ans);
    
}
