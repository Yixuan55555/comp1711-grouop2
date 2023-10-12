#include <stdio.h>
int mean(){

    float Celsius, Fahrenheit;
    printf("What is the Celsius? ");
    scanf("%f",&Celsius);

    Fahrenheit = (9.0/5.0) * Celsius + 32;

    printf ("The Fahrenheit is %5.2fn", Fahrenheit);

    return 0;
}    