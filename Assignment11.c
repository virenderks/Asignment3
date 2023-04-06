#include <stdio.h>

int main() {
    int marks[5], total_marks = 0;
    float average_marks;
    
    // Take input from user
    printf("Enter marks of 5 subjects:\n");
    for(int i=0; i<5; i++) {
        printf("Enter marks of subject %d: ", i+1);
        scanf("%d", &marks[i]);
        
        total_marks += marks[i];
    }
    
    // Calculate average marks
    average_marks = (float) total_marks / 5;
    
    // Check if the candidate passed or failed
    if(average_marks >= 33) {
        printf("The candidate passed the examination with %.2f%% marks\n", average_marks);
    } else {
        printf("The candidate failed the examination with %.2f%% marks\n", average_marks);
    }
    
    return 0;
}
