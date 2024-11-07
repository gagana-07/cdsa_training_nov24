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
