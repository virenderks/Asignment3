#include <stdio.h>

int main() {
    char alphabet;
    
    // Take input from user
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);
    
    // Check if the alphabet is in uppercase or lowercase
    if(alphabet >= 'A' && alphabet <= 'Z') {
        printf("The alphabet is in uppercase.\n");
    } else if(alphabet >= 'a' && alphabet <= 'z') {
        printf("The alphabet is in lowercase.\n");
    } else {
        printf("The character is not an alphabet.\n");
    }
    
    return 0;
}
