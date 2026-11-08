#include <stdio.h>
#define SQ(x) x * x

int main() {
    int num, digi = 1;

    printf ("Enter a Number: ");
    scanf ("%d", &num);

    int square = SQ(num);

    int p = num;

    while (p) {
        digi *= 10;
        p /= 10;
    }

    if (square % digi == num) {
        printf("%d is an Automorphic Number.\n", num);
    } else {
        printf("%d is not an Automorphic Number.\n", num);
    }

    return 0;
}