#include<stdio.h>
void main()
{
	int i=1,n,p;
	printf("enter your value :");
	scanf("%d",&n);
	
	while(i<=n){
		p=i*i;
		printf("%d %d\n",i,p);
		i++;
		
	}
}
