#include <stdio.h>

int main() {
    int a = 1;

    while (a < 10)
    {
        printf ("a is equal to %1d\n", a);
        a ;
    }
    printf ("I've finished the loop and a is equal to %1d\n", a);

    return 0;
}