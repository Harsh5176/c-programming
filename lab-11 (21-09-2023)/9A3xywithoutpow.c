#include<stdio.h>
void main()
{
	int x,y,i,sum;
	
	printf("enter value for x :");
	scanf("%d",&x);
	
	printf("enter value for y :");
	scanf("%d",&y);
	
	while(i<=y){
		sum=x*x;
		i++;
	}
	printf("%d",sum);
}
