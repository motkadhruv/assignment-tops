//Q12.Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>
#include <math.h>
int main()
{
    int num,a,b,n = 0,c = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    a = num;

    for (a = num; a != 0; ++n) {
        a /= 10;
    }

    a = num;
    for (; a != 0; a /= 10) {
        b = a % 10;
        c+= pow(b,n);
    }

    if ((int)c == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

