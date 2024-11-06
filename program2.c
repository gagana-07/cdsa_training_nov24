//Find the smallest digit in a number.
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


//-------------------------------------------------------------------
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

//--------------------------------------------------------------
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


//---------------------------------------------------
//Find the 2nd smallest digit in a number.
#include <stdio.h>
#include <limits.h>

int findSecondSmallestDigit(int num) {
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;

        
        if (digit < smallest) {
            second_smallest = smallest;
            smallest = digit;
        } else if (digit < second_smallest && digit != smallest) {
            second_smallest = digit;
        }

        num /= 10;
    }

   
    return (second_smallest == INT_MAX) ? -1 : second_smallest;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int secondSmallest = findSecondSmallestDigit(num);
    if (secondSmallest == -1) {
        printf("There is no second smallest digit.\n");
    } else {
        printf("The second smallest digit is: %d\n", secondSmallest);
    }

    return 0;
}
