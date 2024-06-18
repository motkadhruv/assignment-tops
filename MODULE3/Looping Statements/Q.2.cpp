//Q2. WAP to accept 5 numbers from user and display all numbers


#include <stdio.h>
int main() 
{
    int number,i;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ",i);
        scanf("%d", &number);
        printf("%d\n",number);
    }


//    printf("Entered numbers:\n");
//    for (i = 0; i < 5; i++) {
        
//    }

    return 0;
}


