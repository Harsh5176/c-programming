#include<stdio.h>
void main()
{
	int x,y,i,sum=1;
	
	printf("enter value for x :");
	scanf("%d",&x);
	
	printf("enter value for y :");
	scanf("%d",&y);
	
	for(;y>0;y--){
		sum=sum*x;
		
	}
	printf("%d",sum);
}
