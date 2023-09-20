#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,a;
    float n;
    printf("enter val: ");
    scanf("%d",&a);
    while (i<=a){
        n=sqrt(i);
        printf("%d %.2f\n", i,n);
        i++;
    }
    return 0;
}