#include<stdio.h>
void main()
{ 
   int a,b,c;
   printf("enter an int val:");
   scanf("%d", &a);
   printf("enter an int val:");
   scanf("%d", &b);
   printf("enter an int val:");
   scanf("%d", &c);
   if(a>b&&a>c){  
           printf("a is greater");
   }
   if(b>c&&b>a){  
           printf("b is greater");
   }
   else{
   	printf("c is greater");
   }
}
