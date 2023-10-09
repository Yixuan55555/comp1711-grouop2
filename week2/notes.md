#include <stdio.h>

int main() {
// setting up 15 slots of memory for a string
char name[15];

//prompting the user
printf("hello, please enter your name: ");

// pr
scanf("%s", name);
printf("Your name is %s\n", name);

return 0;
}