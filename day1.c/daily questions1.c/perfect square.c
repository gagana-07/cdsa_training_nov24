// Check if a number is Perfect Square
#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int sqrtNum = sqrt(num);
    if (sqrtNum * sqrtNum == num) {
        printf("The number is a perfect square.\n");
    } else {
        printf("The number is not a perfect square.\n");
    }
    return 0;
}
