#include<stdio.h>
void main()
{
	char ch;
	printf("enter you val:");
	scanf("%c", ch);
	
	if(ch>='a'&& ch<='z');
	{
		printf("lower case");
	}
	else if(ch>='A'&& ch<='Z')
	{
		printf("upper case");
	}
	else if(ch>='0'&& ch<='9')
	{
		printf("nomber");
	}
	else
	{
		printf("special character");
	}
}
