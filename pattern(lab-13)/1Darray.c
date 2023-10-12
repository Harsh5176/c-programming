#include<stdio.h>
void main()
{
    float a[5]={10.30,100.40,50.80,90.80,100};
    float sumf=0,avgf,minf,maxf,avgc,minc,maxc;
    int i;
    minf=a[0];
    maxf=a[0];


    for(i=0;i<=5;i++)
    {
        sumf=sumf+a[i];

        if(minf>a[i])
        {
            minf=a[i];
        }
       
        if(maxf<a[i])
        {
            maxf=a[i];
        }
    }

    avgf=sumf/5;


}