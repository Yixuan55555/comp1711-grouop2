#include <stdio.h>
int main(){

    int number;
    printf("What is your number?");
    scanf("%d", &number);

    if(number %5 == 0)
    {
        printf("The number is divisible by 5");
    }
    else if (number %4 == 0)
    {
        printf("The number is divisible by 4");
    }
    else 
    {
        printf("The number is divisible by both 4 and 5");
    }

   

    return 0;

    
}