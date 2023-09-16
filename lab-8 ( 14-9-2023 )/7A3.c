#include<stdio.h>
void main()
{
    int a,b;
    char c;

    printf("Enter  (*,/,+,-) :");
    scanf("%c",&c);

    printf("Enter The First Number :");
    scanf("%d", &a);
    printf("Enter The Second Number :");
    scanf("%d", &b);


    switch (c)
    {
    case '+':
        printf("%d + %d =%d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d =%d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d =%d",a,b,a*b);
        break;
    case '/':
        if(b)
        printf("%d / %d =%d",a,b,a/b);
        break;

    default:
        printf("Out Side The Condition");
        break;
    }

}
