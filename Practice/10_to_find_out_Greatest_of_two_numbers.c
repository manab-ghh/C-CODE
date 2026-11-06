#include <stdio.h>

int main() {
    int a, b;

    printf ("Enter two Number: ");
    scanf ("%d%d", &a, &b);

    printf ("The greatest value beween %d and %d is: %d\n", a, b, (a > b) ? a : b);

    return 0;
}