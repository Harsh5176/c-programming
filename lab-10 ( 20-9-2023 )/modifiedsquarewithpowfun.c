#include<stdio.h>
#include<math.h>
void main()
{
	int i=1,n,p,b;
	printf("enter your value :");
	scanf("%d",&n);
	printf("enter value for power :");
	scanf("%d",&b);
	
	while(i<=n){
		p= pow(i,b);
		printf("%d %d\n",i,p);
		i++;
		
	}
}
