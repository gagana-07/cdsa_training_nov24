// Floating-Point Representation Insight 


#include <stdio.h>
int main() {
    float num;
    scanf("%f", &num);
    int integerPart = (int)num;
    printf("%.2f\n", num);
    printf("%d\n", integerPart);
    return 0;
}
