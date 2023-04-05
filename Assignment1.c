#include <stdio.h>

int main() {
    int num;
    
    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is positive or non-positive
    if(num > 0) {
        printf("%d is a positive number\n", num);
    } else {
        printf("%d is a non-positive number\n", num);
    }
    
    return 0;
}
