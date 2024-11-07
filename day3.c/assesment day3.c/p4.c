//solve the problem of calculating the sum of the digits of a five-digit number in C


#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }
    printf("%d\n", sum);
    return 0;
}
