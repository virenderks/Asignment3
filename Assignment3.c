#include <stdio.h>

int main() {
    int num;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is even or odd
    if(num % 2 == 0) {
        printf("%d is an even number\n", num);
    } else {
        printf("%d is an odd number\n", num);
    }
    
    return 0;
}
