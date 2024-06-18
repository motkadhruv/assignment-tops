//Q14.Perform 2D matrix array

#include <stdio.h>
int main() 
{
    int rows, cols;
    int i, j;
    int matrix[rows][cols];

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("The entered matrix is:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

