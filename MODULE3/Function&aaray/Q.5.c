//Q5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice


#include <stdio.h>
void sortAscending(int arr[], int size) 
{
     int temp;
     for (int i = 0; i < size - 1; i++) 
	{
         for (int j = 0; j < size - 1 - i; j++) 
		{
             if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void sortDescending(int arr[], int size) 
{
     int temp;
     for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - 1 - i; j++) 
		{
             if (arr[j] < arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int size) 
{
     for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size1, size2, choice;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    int arr1[size1];
    printf("Enter the elements of the first array:\n");
    
     for (int i = 0; i < size1; i++) 
	{
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    int arr2[size2];
    printf("Enter the elements of the second array:\n");
    
     for (int i = 0; i < size2; i++) 
	{
        scanf("%d", &arr2[i]);
    }
    
    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    
    switch (choice) 
	{
        case 1:
            sortAscending(arr1, size1);
            sortAscending(arr2, size2);
            printf("First array sorted in ascending order:\n");
            printArray(arr1, size1);
            printf("Second array sorted in ascending order:\n");
            printArray(arr2, size2);
            
            break;
            
            
        case 2:
            sortDescending(arr1, size1);
            sortDescending(arr2, size2);
            printf("First array sorted in descending order:\n");
            printArray(arr1, size1);
            printf("Second array sorted in descending order:\n");
            printArray(arr2, size2);
            
            break;
            
            
        default:
            printf("Invalid choice.\n");
            
            break;
    }
    
    return 0;
}



