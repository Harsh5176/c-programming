#include<stdio.h>
void main()
{
    int i=1,n,a;

    printf("enter value : ");
    scanf("%d",&n);

    while(i<=10)
    {
        a=n*i;
		printf("%d * %d = %d\n" ,n,i,a);
        i++;
    }
}
