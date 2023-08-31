#include <stdio.h>
int main() {
	int H,M,S,sec;
	printf("enter total sec :-");
	scanf("%d", &sec);   
	
	H = sec/3600;
	M = sec/60;
	S = sec/3600;
	printf("H:M:S = %d %d %d");
	
	
	return 0;
}

