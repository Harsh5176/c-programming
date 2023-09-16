#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf(" Enter Num : ");
	scanf("%d %d %d " , &a,&b,&c);
	
	if (a>b && a>c )
	{
		 if(b>c)
		{
			printf(" b is second largest");
		}
		else if(c>b)
		{
			printf(" c is second largest");
		}
		
	}
	printf(" a is second largest");
	}
