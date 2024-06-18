//Q18.Write a C program to calculate profit and loss on a transaction.


#include <stdio.h>
int main()
 {
    int cost, selling, profit, loss;
    printf("Enter the cost price: ");
    scanf("%d", &cost);
    printf("Enter the selling price: ");
    scanf("%d", &selling);
    
    if (selling>cost) 
	{
        profit = selling - cost;
        printf("Profit: %d\n", profit);
    } 
	else if (cost > selling) 
	{
        loss = cost - selling;
        printf("Loss: %d\n", loss);
    } 
	else 
	{
        printf("No profit:no loss.\n");
    }

    return 0;
}


