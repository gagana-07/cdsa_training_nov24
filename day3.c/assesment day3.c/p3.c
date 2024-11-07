// To determine if a number N is prime

#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);
    int isPrime = 1;  
    if (N <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = 0;  
                break;
            }
        }
    }
    if (isPrime) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
