#include <stdio.h>
#include <time.h>
int main(){

    int A = 55;
    int B = 77;
    int C = 0;

    printf("before: A=%d, B=%d\n", A, B);
    C = A;
    A = B;
    B = C;
    printf("after: A=%d, B=%d\n", A, B);
    
    return 0;

}
    
