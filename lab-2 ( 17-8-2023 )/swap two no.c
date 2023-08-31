#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter an int val:");
  scanf("%d", &a);
  printf("enter an int val:");
  scanf("%d", &b);
  c=b;
  b=a;
  a=c;
  printf("a=%d b=%d",a , b);
  
}
