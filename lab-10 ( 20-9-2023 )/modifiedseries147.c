#include<stdio.h>
void main()
{
	int i=1,n,a;
	printf("enter your value : ");
	scanf("%d",&n);
	
	printf("enter value to increse : ");
	scanf("%d",&a);
	
	while(i<=n){
		printf("%d\n",i);
		i=i+a;
	}
}
