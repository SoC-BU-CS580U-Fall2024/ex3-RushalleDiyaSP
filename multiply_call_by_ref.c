#include <stdio.h>

void multiply(const int *x, const int *y, long long *product) {
    *product = (long long)(*x) * (long long)(*y);
}

int main(void) {
    int a, b;
    long long result;
//B01002362
//Rushalle
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    multiply(&a, &b, &result);
    printf("Product = %lld\n", result);
    return 0;
}
//B01002362
//Rushalle