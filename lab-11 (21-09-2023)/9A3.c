#include<stdio.h>
void main()
{
	int x,y,sum=1;
	printf("enter your value :");
	scanf("%d",&x);
	printf("enter your value :");
	scanf("%d",&y);
	
    while(y>0){
		sum=sum*x;
		y--;
	}
    printf("%d",sum);
}