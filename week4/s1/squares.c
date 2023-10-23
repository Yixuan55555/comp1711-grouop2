#include <stdio.h>

int main()
{
    char* filename = "squares.dat";
    FILE *file = fopen(filename, "w");

    int number;
    int squares;

    printf("Enter the numbers: ", squares);
    scanf("%d", squares);
    
    for (int i = 1; i < squares; i++)
    {
        scanf("%d", &number);
        squares = i * i;
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;

}