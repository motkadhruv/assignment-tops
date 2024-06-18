//Q2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)


#include <stdio.h>
void addition() 
{
    double a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtraction() 
{
    double a, b;
    printf("Enter two numbers to subtract (a - b): ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiplication() 
{
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void division() 
{
    double a, b;
    printf("Enter two numbers to divide (a / b): ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) 
	{
        printf("Result: %.2lf\n", a / b);
    } 
	else 
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() 
{
    int choice;
    while (1) 
	{
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                addition();
                
                break;
                
                
            case 2:
                subtraction();
                
                break;
                
                
            case 3:
                multiplication();
                
                break;
                
                
            case 4:
                division();
                
                break;
                
                
            case 5:
                printf("Exiting...\n");
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}



