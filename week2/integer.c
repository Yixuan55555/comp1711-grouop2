#include <stdio.h>
int main(){

    float a, b, sum;

    printf("What is the a? ");
    scanf("%f", &a);

    printf("what is the b? ");
    scanf("%f", &b);

    sum = a + b;

    printf("The sum is: %.3f\n", sum);

    return 0;

}