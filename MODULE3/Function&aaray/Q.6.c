//Q6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

//#define MAX 10  // Maximum size of the matrix

void inputMatrix(int matrix[MAX][MAX], int row, int col, char name) 
{ 
     printf("Enter elements of matrix %c (%dx%d):\n", name, row, col);
     for (int i = 0; i < row; i++) 
	{
         for (int j = 0; j < col; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) 
{
     for (int i = 0; i < row; i++) 
	{
         for (int j = 0; j < col; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) 
{
     for (int i = 0; i < row; i++) 
	{
         for (int j = 0; j < col; j++) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row, int col) 
{
     for (int i = 0; i < row; i++) 
	{
         for (int j = 0; j < col; j++) 
		{
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) 
{
      for (int i = 0; i < row1; i++) 
	{
          for (int j = 0; j < col2; j++) 
		{
              result[i][j] = 0;
              for (int k = 0; k < col1; k++) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() 
{
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2, choice;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);
    inputMatrix(mat1, row1, col1, 'A');

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);
    inputMatrix(mat2, row2, col2, 'B');

    printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1:
            if (row1 == row2 && col1 == col2) 
			{
                addMatrices(mat1, mat2, result, row1, col1);
                printf("Result of matrix addition:\n");
                printMatrix(result, row1, col1);
            } 
			else 
			{
                printf("Matrix addition not possible. Matrices must have the same dimensions.\n");
            }
            
            break;
            
            
        case 2:
            if (row1 == row2 && col1 == col2) 
			{
                subtractMatrices(mat1, mat2, result, row1, col1);
                printf("Result of matrix subtraction:\n");
                printMatrix(result, row1, col1);
            } 
			else 
			{
                printf("Matrix subtraction not possible. Matrices must have the same dimensions.\n");
            }
            
            break;
            
            
        case 3:
            if (col1 == row2) 
			{
                multiplyMatrices(mat1, mat2, result, row1, col1, col2);
                printf("Result of matrix multiplication:\n");
                printMatrix(result, row1, col2);
            } 
			else 
			{
                printf("Matrix multiplication not possible. Number of columns of first matrix must be equal to number of rows of second matrix.\n");
            }
            
            break;
            
            
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

