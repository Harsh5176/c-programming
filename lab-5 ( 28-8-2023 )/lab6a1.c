#include<stdio.h>
void main()
{
	int a,b,d;
	char c;
	
	printf("enter your char :");
	scanf("%c" ,&c);
	printf("enter your val :");
	scanf("%d" ,&a);
	
	printf("enter your val :");
	scanf("%d" ,&b);
	

	
	if(c=='*'){
		d=a*b;
		printf("your ans is : %d",d);
	}
	
	if(c=='/'){
		d=a/b;
		printf("your ans is : %d",d);
	}
	
	if(c=='+'){
		d=a+b;
		printf("your ans is : %d",d);
	}
	
	if(c=='-'){
		d=a-b;
		printf("your ans is : %d",d);
	}
	
	
	
	
}
