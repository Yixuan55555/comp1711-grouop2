#include <stdio.h>

float Sphere (float radius)
{
    float SphereVolume;
    SphereVolume = 3.14 * radius * radius * radius * 4/3 ;
    return SphereVolume;
}

int main ()
{
    float radius, SphereVolume;
    printf("Whats is the radius?");
    scanf("%f", &radius);

    SphereVolume = Sphere(radius);

    printf("The volume of sphere is: %f\n", SphereVolume);

    return 0;
}
