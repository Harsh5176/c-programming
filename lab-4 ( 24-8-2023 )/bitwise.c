#include<stdio.h>
void main()
{
	int n;
	printf("enter val:");
	scanf("%d",&n);
	
	if(n & 1 == 1){
		printf("no is odd");
	}
	else{
		printf("no is even");
	}
}
