//Q14.Write a program in C to combine two strings manually


#include <stdio.h>

void combineStrings(char *str1, const char *str2) {
    // Find the end of the first string
    while (*str1) {
        str1++;
    }

    // Append the second string to the first string
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Null-terminate the combined string
    *str1 = '\0';
}

int main() {
    char str1[1000], str2[500];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline character from the strings if present
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    combineStrings(str1, str2);

    printf("Combined string: %s\n", str1);

    return 0;
}

