#include<stdio.h>
void main()
{
    int i,n,j,a=1;
    char ch= 'A';
    printf("enter value :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        //space 
         for(j=1;j<=n-i;j++)
         {
            printf(" ");
         }

        //star
        for(j=1;j<=2*i-1;j++)
        {  if(j%2==1)
             {
                if(i%2==1)
                {
                    printf("%c",ch);
                    ch++;
                }
                else
                {
                    printf("%d",a);
                    a++;

                }

            
             }
            else{
            printf(" ");
             }
         }
         
        
        printf("\n");
    }
}

