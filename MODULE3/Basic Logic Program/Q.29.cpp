//Q29.Convert minutes into seconds and hours



#include <stdio.h>

int main() {
    int minutes, hours, seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;   // 1 hour = 60 minutes
    seconds = minutes * 60; // 1 minute = 60 seconds
    printf("%d minutes is %d hours and %d seconds\n", minutes, hours, seconds);

    return 0;
}

