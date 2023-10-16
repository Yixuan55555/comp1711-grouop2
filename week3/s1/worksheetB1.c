#include <stdio.h>
int main(){

    int number;

    printf("What is your number?");
    scanf("%d", &number);

    if(number < 0)
    {
        printf("The number is Negative");
    }
    else if (number > 0)
    {
        printf("The number is Positive");
    }
    else 
    {
        printf("The number is Zero");
    }

    return 0;
}
