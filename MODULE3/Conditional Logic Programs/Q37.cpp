//Q37. WAP to show    i. Monday to Sunday using switch case
//                      ii. Vowel or Consonant using switch case


#include <stdio.h>
int main()
 {
    int day;
    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    switch (day) 
	{
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number.\n");
    }
    
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
//    ch = tolower(ch);

    switch (ch) {
        case 'a':
        	 printf("%c is a vowel.\n", ch);
             break;
        case 'e':
        	 printf("%c is a vowel.\n", ch);
             break;
        case 'i':
        	 printf("%c is a vowel.\n", ch);
             break;
        case 'o':
        	 printf("%c is a vowel.\n", ch);
             break;
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }




    return 0;
}



