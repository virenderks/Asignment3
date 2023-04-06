#include <stdio.h>

int main() {
    int num;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is divisible by 7 or 3
    if(num % 7 == 0 || num % 3 == 0) {
        printf("%d is divisible by either 7 or 3.\n", num);
    } else {
        printf("%d is not divisible by either 7 or 3.\n", num);
    }
    
    return 0;
}
