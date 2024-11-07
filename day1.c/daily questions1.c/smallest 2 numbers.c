//Find smallest of 2 numbers
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2) {
        printf("The smallest number is %d.\n", num1);
    } else {
        printf("The smallest number is %d.\n", num2);
    }
    return 0;
}
