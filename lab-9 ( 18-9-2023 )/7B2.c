#include<stdio.h>
void main()
{
	char n;
	printf("entre val :");
	scanf("%c", &n );
	
	(n >= 26 && n<= 91 || n<=92 && n<=118 ) ? printf("alphabet") : printf("number or simbol");
}
