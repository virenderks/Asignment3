#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Take input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Check which is the greatest number
    if(num1 > num2 && num1 > num3) {
        printf("%d is the greatest number\n", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("%d is the greatest number\n", num2);
    } else if(num3 > num1 && num3 > num2) {
        printf("%d is the greatest number\n", num3);
    } else {
        printf("The greatest number is %d and it appears two or three times\n", num1);
    }
    
    return 0;
}
