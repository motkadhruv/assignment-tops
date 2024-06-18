//Q13.Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    removeNonAlphabets(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}

