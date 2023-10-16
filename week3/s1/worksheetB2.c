#include <stdio.h>
int main(){

    int number;
    printf("What is your number?");
    scanf("%d", &number);

    switch(number);
    {
        case 0:    printf ("The number is divisible by 4\n");
        break;

        case 1:     printf ("The number is divisible by 5\n");
        break;

        case 2:     printf ("The number is divisible by both 4 and 5\n");
        break;

        default:    printf ("The number is not divisible by both 4 and 5\n");

    }

    return 0;

    
}