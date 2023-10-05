#include<stdio.h>
void main()
{
    int i,j,n;

    printf("enter no. :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=n;j>=n-i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}