#include<stdio.h>
void main()
{
	int i=1,n;
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==1)
			printf("%d\n",i);
		i=i+1;
	}
}
