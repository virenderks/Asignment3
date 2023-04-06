#include <stdio.h>

int main() {
    int month;

    // Take input from user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Check the number of days in the month
    switch(month) {
        case 2:
            printf("28 or 29 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}
