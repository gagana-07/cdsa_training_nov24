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

