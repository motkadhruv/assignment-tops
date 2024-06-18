//Q7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746


#include <stdio.h>
int main()
{
    int number, reversed = 0, a,c,orig;
    printf("Enter a number: ");
    scanf("%d", &number);
    orig=number;
    
    while (number != 0) {
        a = number % 10;
        reversed = reversed * 10 + a;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    
    if(orig==reversed){
    	
    	printf("num of the palindrom %d",c);

    	
	}
	
	else{
		printf("not palindrom %d",c);
		
	}

    return 0;
}

