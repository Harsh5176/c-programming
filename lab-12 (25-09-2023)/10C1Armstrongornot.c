#include <stdio.h>
int main() {
    int n, i, rem, sum=0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    i = n;

    while (i != 0) {
       
        rem = i%10;
        
       sum += rem*rem*rem;
        
       
       i/=10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}
