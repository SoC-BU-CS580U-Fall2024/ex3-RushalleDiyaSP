//B01002362
//Rushalle
#include <stdio.h>

int main(void) {
    int a, b, sum;
    int *pa = &a, *pb = &b, *psum = &sum;

    printf("Enter two integers: ");
    if (scanf("%d %d", pa, pb) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    *psum = *pa + *pb;
    printf("Sum = %d\n", *psum);
    return 0;
}
//B01002362
//Rushalle