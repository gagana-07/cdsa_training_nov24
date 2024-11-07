//print the nth fibonacci term


#include <stdio.h>

int getNthFibonacci(int n) {
    int a = 0, b = 1, next;
    if (n == 1) return a;
    if (n == 2) return b;

    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is %d\n", n, getNthFibonacci(n));
    return 0;
}
