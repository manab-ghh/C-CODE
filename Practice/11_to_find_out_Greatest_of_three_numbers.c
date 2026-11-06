#include <stdio.h>

int main() {
    int a, b, c;

    printf ("Enter Three integer: ");
    scanf ("%d%d%d", &a, &b, &c);

    printf ("The Greatest number among %d, %d and %d is: %d\n", a, b, c, (a > b && a > c) ? a : (b > c) ? b : c);
}