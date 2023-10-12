#include <stdio.h>
int main(){
    float number1, number2, result;

    printf("What is the number1?");
    scanf("%f", &number1);

    printf("What is the number2?");
    scanf("%f", &number2);

    result = number1 + number2;

    printf("The result is: %.3g\n", result);

    return 0;


}
