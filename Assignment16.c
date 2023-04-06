#include <stdio.h>

int main() {
    char ch;

    // Take input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check whether the character is an uppercase alphabet
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    }
    // Check whether the character is a lowercase alphabet
    else if(ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    }
    // Check whether the character is a digit
    else if(ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    // If the character is not an alphabet or a digit, it must be a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
