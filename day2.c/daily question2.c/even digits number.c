//Find the number of Even digits in a number.
#include <stdio.h>
#include <limits.h>

int findSmallestDigit(int num) {
    int smallest = INT_MAX;

     if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;

        if (digit < smallest) {
            smallest = digit;
        }

        num /= 10;
    }

    return smallest;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int smallestDigit = findSmallestDigit(num);
    printf("The smallest digit is: %d\n", smallestDigit);

    return 0;
}