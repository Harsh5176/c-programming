#include<stdio.h>
void main()
{
    int i,n,a;
    printf("enter value : ");
    scanf("%d",&n);


    for(i=1;i<=10;i++)
    {
        a=n*i;
		printf("%d * %d = %d\n" ,n,i,a);
        
    }
}