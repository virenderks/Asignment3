#include <stdio.h>

int main() {
    int num1, num2;
    
    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Compare the numbers
    if(num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if(num2 > num1) {
        printf("%d is greater than %d\n", num2, num1);
    } else {
        printf("%d and %d are equal\n", num1, num2);
    }
    
    return 0;
}
