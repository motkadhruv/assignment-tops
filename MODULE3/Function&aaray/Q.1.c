//Q1. Write a program to find out the max number from given array using function


//#include <stdio.h>
//
//// Function prototype
//int findMax(int arr[], int size);
//
//int main() {
//    int size;
//
//    // Input size of the array
//    printf("Enter the size of the array: ");
//    scanf("%d", &size);
//
//    // Declare the array
//    int arr[size];
//
//    // Input elements of the array
//    printf("Enter %d elements of the array:\n", size);
//    for(int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // Find the maximum number using the function
//    int max = findMax(arr, size);
//
//    // Print the maximum number
//    printf("The maximum number in the array is: %d\n", max);
//
//    return 0;
//}

// Function to find the maximum number in an array

#include<stdio.h>
int maxnumber();
int arr[100],size;
int main()
{
	
	printf("enter tne size of array:");
	scanf("%d",&size);
	maxnumber();
	
	return 0;
}

int maxnumber()
{  
int i,o,max;
	printf("enter element of the array :%d",size);
	for(i=o;i<=size;i++)
	{
		scanf("%d",&arr[i]);
	
	}
		max= maxnumber(arr,size);
		printf("tne max number is the array:%d\n ",max);
	
}



