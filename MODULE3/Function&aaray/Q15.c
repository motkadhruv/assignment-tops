//Q15.Store 5 numbers in array and sort it in ascending order

#include <stdio.h>
int main() 
{
    int numbers[5];
    int i, j, temp;
    
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 4; i++) 
	{
         for(j = 0; j < 4 - i; j++) 
		{
             if(numbers[j] > numbers[j + 1]) 
			{
            
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }


    printf("Sorted numbers in ascending order:\n");
    for(i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

