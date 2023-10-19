#include <stdio.h>

float Area (float radius)
{
    float CircleArea;
    CircleArea = 3.14 * radius * radius;
    return CircleArea;
}

int main ()
{
    float radius, CircleArea;
    printf("Whats is the radius?");
    scanf("%f", &radius);

    CircleArea = Area(radius);

    printf("The area of circle is: %f\n", CircleArea);

    return 0;
}