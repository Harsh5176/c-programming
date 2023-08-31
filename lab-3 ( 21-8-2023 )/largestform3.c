#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter val:");
	scanf("%d",&a);
	printf("enter val:");
	scanf("%d",&b);
	printf("enter val:");
	scanf("%d",&c);
	
	if(a>b){
		  if(a>c){
		  	printf("a is largest");
		  	
	}
	else{
		printf("c is largest");
	}
	}
	else
	{
		  if(b>c){
		  	printf("b is largest");
	}
	else{
		printf("c is largest");
	}
	}
}
