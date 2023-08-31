#include<stdio.h>
void main()
{
	float a,b,c,d;
		printf("enter your char :");
	    scanf("%f" ,&a);
	    
	    if(a>=10000){
	    	b=(a*20)/100;
	    	c=(a*80)/100;
	    }
	    if(a>=20000){
	    	b=(a*25)/100;
	    	c=(a*90)/100;
		}
		if(a>=30000){
	    	b=(a*30)/100;
	    	c=(a*95)/100;
		}
		
}
