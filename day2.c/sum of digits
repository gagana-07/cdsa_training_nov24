//Find sum of digits in a number.
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("The sum of digits is: %d\n", sum);

    return 0;
}

