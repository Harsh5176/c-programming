#include<stdio.h>
void main()
{
	int i=1,n,o=0,e=0;
	printf("enter val :");
	scanf("%d",&n);
	while(i<=n){
		
		if(i%2==0){
			e++;
		}
		else{
			o++;
		}
		i++;
	}
	printf(" count of even no. is %d\n",e);
	printf(" count of odd no. is %d",o);
}
