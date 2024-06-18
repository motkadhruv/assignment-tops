//Q15.Write a program in C to find the largest and smallest words in a string.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLargestAndSmallestWords(char *str, char *largest, char *smallest) {
    char currentWord[1000];
    int maxLen = 0, minLen = 1000;
    int currentLen = 0;
    int i = 0, j = 0;

    while (1) {
        if (isalpha(str[i]) || str[i] == '-') {
            currentWord[j++] = str[i];
            currentLen++;
        } else {
            if (currentLen > 0) {
                currentWord[j] = '\0';  // Null-terminate the current word
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                    strcpy(largest, currentWord);
                }
                if (currentLen < minLen) {
                    minLen = currentLen;
                    strcpy(smallest, currentWord);
                }
                j = 0;
                currentLen = 0;
            }
            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }
}

int main() {
    char sentence[1000];
    char largest[1000];
    char smallest[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    findLargestAndSmallestWords(sentence, largest, smallest);

    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}

