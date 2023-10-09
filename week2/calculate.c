#include <stdio.h>

int main(){

    float width, length, area;

    printf("What is the width? ");
    scanf("%f", &width);

    printf("What is the length? ");
    scanf("%f", &length);

    area = width * length;

    printf("The area is: %.3g\n", area);

    return 0;

}