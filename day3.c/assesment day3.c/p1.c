// to print powers of two


#include <stdio.h>
int main() {
    int power = 2;

    while (power <= 64) {
        printf("%d\n", power);
        power *= 2;  
    }
    return 0;
}
