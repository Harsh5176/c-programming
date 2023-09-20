#include<stdio.h>
void main()
{
	int i=1,n;
	
	printf("enter no. which you want to find factors : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		printf("%d\n",i);
		i++;
	}
}
