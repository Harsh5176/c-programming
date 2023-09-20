#include<stdio.h>
#include<math.h>
void main()
{
	int i=1,n,p,b=2;
	printf("enter your value :");
	scanf("%d",&n);
	
	while(i<=n){
		p= pow(i,b);
		printf("%d %d\n",i,p);
		i++;
		
	}
}
