#include<stdio.h>
void main()
{
	int i=1,n,o=0,e=0;
	
	while(i<=10){
		scanf("%d",&n);
		if(n%2==0){
			e++;
		}
		else{
			o++;
		}
		i++;
	}
	printf("%d\n",e);
	printf("%d",o);
	
}
