#include<stdio.h>
void main()
{
    int i=1,n,a,sum,ave;

    printf("entre value for how many no. you want to enter :");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("enter a no :");
        scanf("%d",&a);

        sum=sum+a;
        i++;
    }
        
        ave=sum/n;

        printf("sum = %d and ave = %d",sum,ave);
}