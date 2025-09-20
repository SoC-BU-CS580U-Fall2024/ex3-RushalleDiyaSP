#include <stdio.h>
#include <string.h>

static void swap(char *a, char *b) {
    char t = *a; *a = *b; *b = t;
}
//B01002362
//Rushalle
static void permute(char *s, int l, int r, long long *count) {
    if (l == r) {
        puts(s);
        (*count)++;
        return;
    }
    for (int i = l; i <= r; ++i) {
        swap(s + l, s + i);              // pointer swap
        permute(s, l + 1, r, count);
        swap(s + l, s + i);              // backtrack
    }
}
//B01002362
//Rushalle
int main(void) {
    char s[] = "HMAli";                  // exactly as required
    long long count = 0;
    permute(s, 0, (int)strlen(s) - 1, &count);
    printf("Total permutations: %lld\n", count); // should be 120
    return 0;
}
