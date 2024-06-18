//Q10.Write a program in C to extract a substring from a given string




#include<stdio.h>
#include<string.h>

int main() {
	char string[50], substring[50];
	int i, choice, value, length;
	
	printf("Enter your string: ");
	scanf("%s", string);
	
	printf("Enter your choice for substring:\n1. Left\n2. Right\n");
	scanf("%d", &choice);
	
	printf("Enter the number for substring: ");
	scanf("%d", &value);
	
	length = strlen(string);
	
	switch (choice) {
		case 1:
			for (i = 0; i <= value - 1; i++) {
				substring[i] = string[i];
			}
			printf("Your substring is %s.", substring);
			break;
			
		case 2:
			for (i = 0; i <= value; i++) {
				substring[i] = string[length - value + i];
			}
			printf("Your substring is %s.", substring);
			break;
				
		default:
			printf("Invalid Choice.");
	}
	return 0;
}


//#include <stdio.h>
//#include <string.h>
//void substring(char *source, int from, int n, char *target) 
//{
//    int length = strlen(source);
//1
//    if (from + n > length) 
//	{
//        n = length - from;
//    }
//
//    int i;
//    for (i = 0; i < n; i++) 
//	{
//        target[i] = source[from + i];
//    }
//    target[i] = '\0';
//}
//
//int main() 
//{
//    char source[100], target[100];
//    int from, n;
//
//    // Input the source string
//    printf("Enter the source string: ");
//    fgets(source, sizeof(source), stdin);
//    source[strcspn(source, "\n")] = '\0'; 
//    
//    printf("Enter the starting index: ");
//    scanf("%d", &from);
//    printf("Enter the length of the substring: ");
//    scanf("%d", &n);
//
//    if (from < 0 || from >= strlen(source)) 
//	{
//        printf("Invalid starting index.\n");
//        return 1;
//    }
//
//    if (n < 0) 
//	{
//        printf("Invalid length.\n");
//        return 1;
//    }
//
//    substring(source, from, n, target);
//    printf("Extracted substring: %s\n", target);
//
//    return 0;
//}

