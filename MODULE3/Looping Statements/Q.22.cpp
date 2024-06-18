//Q22. Accept 3 numbers from user using while loop and check each numbers palindrome


#include <stdio.h>
int main() 
{
    int num, original, reversed, remainder,count = 1;

    while (count <= 3) {
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        original = num;
        reversed = 0;

        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }

        count++;
    }

    return 0;
}

