#include <stdio.h>

int main() {
    int n, a = 0, b = 1, s = 1;

    printf ("Enter the range:");
    scanf ("%d", &n);

    while (n--) {
        a = a + b;
        b = a - b;
        s = a - s;

        printf ("%2d\t", s);
    }

    printf ("\n");

    return 0;
}