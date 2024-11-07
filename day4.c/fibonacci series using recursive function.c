//function to find fibonacci using factorial using recursive function taking 1 and 2 as the start number


#include <stdio.h>
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
    int n;
    printf("Enter a position in the Fibonacci sequence: ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    int fact = factorial(fib);

    printf("Fibonacci number at position %d is %d\n", n, fib);
    printf("Factorial of Fibonacci number %d is %d\n", fib, fact);

    return 0;
}
