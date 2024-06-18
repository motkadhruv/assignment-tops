//Q12.WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h>
int main() 
{
    char names[5][50];

    printf("Enter 5 students' names:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') 
		{
            names[i][len - 1] = '\0';
        }
    }

    printf("\nThe entered names are:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

