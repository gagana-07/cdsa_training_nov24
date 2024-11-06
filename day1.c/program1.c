



//---------------------------------------------------------------------------

//--------------------------------------------------------------------------
// Check if a number is divisible by 5
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 5 == 0) {
        printf("The number is divisible by 5.\n");
    } else {
        printf("The number is not divisible by 5.\n");
    }
    return 0;
}



//------------------------------------------------------------------------------
// Check if a number is 2 digit number
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num >= 10 && num <= 99) {
        printf("The number is a 2-digit number.\n");
    } else {
        printf("The number is not a 2-digit number.\n");
    }
    return 0;
}



//---------------------------------------------------------------------
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



//--------------------------------------------------------------------
 //Find biggest of 2 distinct numbers
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two distinct numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        printf("The biggest number is %d.\n", num1);
    } else {
        printf("The biggest number is %d.\n", num2);
    }
    return 0;
}



//--------------------------------------------------------------------------
 //Find smallest of 3 distinct numbers
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 < num2 && num1 < num3) {
        printf("The smallest number is %d.\n", num1);
    } else if (num2 < num3) {
        printf("The smallest number is %d.\n", num2);
    } else {
        printf("The smallest number is %d.\n", num3);
    }
    return 0;
}
