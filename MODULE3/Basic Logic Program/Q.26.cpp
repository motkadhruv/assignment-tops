//Q26.Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main()
 {
    int fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2d\n", celsius);

    return 0;
}


