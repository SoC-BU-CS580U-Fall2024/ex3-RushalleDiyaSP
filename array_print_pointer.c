//B01002362
//Rushalle
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid n.\n");
        return 1;
    }

    int *arr = (int *)malloc((size_t)n * sizeof *arr);
    if (!arr) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", arr + i) != 1) {
            fprintf(stderr, "Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    printf("Elements (via pointer): ");
    for (int *p = arr; p < arr + n; ++p) {
        printf("%d ", *p);
    }
    printf("\n");

    free(arr);
    return 0;
}
//B01002362
//Rushalle
