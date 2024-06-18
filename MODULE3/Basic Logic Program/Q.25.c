//Q25.Accept 5 expense from user and find average of expense

#include <stdio.h>
int main() 
{
    float expense,average_expense,total_expense = 0;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i+1);
        scanf("%f", &expense);
        
        total_expense += expense;
    }
    average_expense = total_expense / 5;

    printf("\nTotal expense: %.2f\n", total_expense);
    printf("Average expense: %.2f\n", average_expense);

    return 0;
}


