//Q.2. Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)

#include<stdio.h>
int main()
{
    char a;
    int num1, num2, result;

    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c", &a);

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(a) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
                result = num1 / num2;
                printf("Result: %d\n", result);

            break;
        case '%':
            
                result = num1 % num2;
                printf("Result: %d\n", result);
            
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

	return 0;
}

