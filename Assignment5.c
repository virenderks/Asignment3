#include <stdio.h>

int main() {
    int num;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is a three digit number
    if(num >= 100 && num <= 999) {
        printf("%d is a three digit number\n", num);
    } else {
        printf("%d is not a three digit number\n", num);
    }
    
    return 0;
}
