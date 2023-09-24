#include<stdio.h>
void main()
{
	int i=1,n,p,sum;
	printf("enter your value :");
	scanf("%d",&n);
	
	while(i<=n){
		p=i*i;
		sum=sum+p;
		i++;
	}
    printf("%d",sum);
}