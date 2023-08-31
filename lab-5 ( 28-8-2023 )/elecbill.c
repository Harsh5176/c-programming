#include<stdio.h>
void main()
{
	float a,b,c,d,f;
	
	printf("enter your val:");
	scanf("%f" ,&a);
	
	if(a>1&&a<50){
		b=a*0.5;
		printf("%f",b);
	}
	if(a>50&&a<150){
		c=a*0.75-b;
		printf("%f" ,c);
	}
	if(a>150&&a<250){
		d=a*1.2-c;
		printf("%f" ,d);
	}
	if(a>250){
		f=a*1.5-d;
		printf("%f" ,f);
	}
}
