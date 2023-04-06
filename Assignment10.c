#include <stdio.h>

int main() {
    float cost_price, selling_price, profit_loss_percent;
    
    // Take input from user
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    
    // Calculate profit or loss percentage
    if(selling_price > cost_price) {
        profit_loss_percent = (selling_price - cost_price) / cost_price * 100;
        printf("Profit percentage is: %.2f%%\n", profit_loss_percent);
    } else if(selling_price < cost_price) {
        profit_loss_percent = (cost_price - selling_price) / cost_price * 100;
        printf("Loss percentage is: %.2f%%\n", profit_loss_percent);
    } else {
        printf("There is no profit or loss\n");
    }
    
    return 0;
}
