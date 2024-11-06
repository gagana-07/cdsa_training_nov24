// Check if a number is positive
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }
    return 0;
}


//-------------------------------------------------------------------
// Check if a number is Even
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}


//-------------------------------------------------------------------------
// Check if a number is Even or Odd
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}


//------------------------------------------------------------------------
// Check if a character is upper case 
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    } else {
        printf("The character is not uppercase.\n");
    }
    return 0;
}


//---------------------------------------------------------------------------
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


//-----------------------------------------------------------------------
//Check if a person is eligible to vote on age basis
#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("Eligible to vote.\n");
    } else {
        printf("Not eligible to vote.\n");
    }
    return 0;
}


//------------------------------------------------------------------
// Check if a year is Leap year
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year.\n");
    } else {
        printf("Not a leap year.\n");
    }
    return 0;
}


//----------------------------------------------------------------------
//Check if an alphabet is a Vowel
#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The alphabet is a vowel.\n");
    } else {
        printf("The alphabet is not a vowel.\n");
    }
    return 0;
}



//---------------------------------------------------------------------------
// Check if a character is a digit or alphabet or a symbol
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    if (isdigit(ch)) {
        printf("The character is a digit.\n");
    } else if (isalpha(ch)) {
        printf("The character is an alphabet.\n");
    } else {
        printf("The character is a symbol.\n");
    }
    return 0;
}


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
