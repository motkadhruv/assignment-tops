//Q11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

void swapCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    swapCase(sentence);

    printf("Modified sentence: %s", sentence);

    return 0;
}

