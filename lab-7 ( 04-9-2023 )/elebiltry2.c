#include<stdio.h>
void main()
{
	float a,b,c,d,f;
	
	printf("enter your val:");
	scanf("%f" ,&a);
	
	if(a<=50){
		b=a*0.5;
		printf("%f",b);
	}
	if(a>50&&a<=150){
		c=50*0.50-(b-50)*0.75;
		printf("%f" ,c);
	}
	if(a>150&&a<=250){
		d=50*0.50+100*.75+(c-150)*1.20;
		printf("%f" ,d);
	}
	if(a>250){
		f=50*0.50+100*0.75+100*1.20+(d-250)*1.50;
		printf("%f" ,f);
	}
}
