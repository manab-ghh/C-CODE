#include <stdio.h>

int main() {
    int n;

    printf ("Enter the range: ");
    scanf ("%d", &n);

    printf ("The sum of %d natural number is: %d\n", n, (n * (n + 1)) / 2);

    return 0;
}