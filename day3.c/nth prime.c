//to find nth prime number


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int findNthPrime(int n) {
    int count = 0, number = 2;
    while (count < n) {
        if (isPrime(number)) {
            count++;
        }
        if (count < n) {
            number++;
        }
    }
    return number;
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The %dth prime number is %d\n", n, findNthPrime(n));
    return 0;
}
