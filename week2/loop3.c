#include <stdio.h>

int main() {
    int a = 11;

    while (a < 1000)
    {
        printf ("a is equal to %d\n", a);
        a+=11;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}