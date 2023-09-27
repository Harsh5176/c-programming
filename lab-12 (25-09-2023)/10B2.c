#include<stdio.h>
void main()
{
    int i=2,n;

    printf("enter no. :");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0)
        {
            printf("Not Prime :");
            return;
        }
        i++;
    }
    printf("Nomber is prime");
}