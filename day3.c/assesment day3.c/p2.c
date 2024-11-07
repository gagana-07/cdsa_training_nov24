//number of digits in a given integer n by repeatedly dividing it by 10 until it becomes 0


#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
