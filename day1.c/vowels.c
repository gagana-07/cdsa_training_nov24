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
