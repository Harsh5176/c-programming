#include<stdio.h>
void main()
{
	int Y,W,D,day;
	printf("entre total days :-");
	scanf("%d", &day);
	Y = day/365;
	W = day/7;
	D = day%365==1;
	printf("Y:W:D = %d %d %d");
	return 0;
}
