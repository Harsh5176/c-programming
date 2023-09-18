#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter val :");
    scanf("%d %d %d",&a,&b,&c);

    (a>c && a>b) ? (printf("a is largest")) : (b>c ? printf("b is largest") : printf("c is largest"));
}
