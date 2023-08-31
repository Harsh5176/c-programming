#include<stdio.h>
void main()
{
	char a_to_z;
	scanf("%c", &a_to_z);
	if(a_to_z==105 || a_to_z==97 ||a_to_z==101||a_to_z==111||a_to_z==117 ||
	    a_to_z== 65|| a_to_z==69 ||a_to_z==73||a_to_z==79||a_to_z==85 )
	{ 
	   printf("no is vowel");
	}
	else
	{
		printf("no is constunt");
	}
}
