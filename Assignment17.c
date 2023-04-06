#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Take input from user
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Check whether the triangle is valid
    if(side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        printf("The triangle is valid.\n");
    }
    else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
