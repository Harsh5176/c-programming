#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float per;

	printf("enter your marks");
	scanf("%d %d %d %d %d" ,&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)/5.0;
	
	if(per<35){
		printf("fail");
	}
	
	else if(per>=35 && per<45){
		printf("pass");
	}
	
	else if(per>=45 && per<60){
		printf("second class");
	}
	
	else if(per>=60 && per<70){
		printf("first class");
	}
	
	else if(per>=70){
		printf("Distinction");
	}
	
	
	
	
	
}
