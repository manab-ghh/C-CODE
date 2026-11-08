#include <stdio.h>

int fact(int n) {
    if (n == 0) return 1;

    return n * fact(n - 1);
}

int main() {
    int num, s = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    int q = num;

    while (q) {
        int r = q % 10;
        s += fact(r);
        q /= 10;
    }

    if (s == num) 
        printf ("This Number is Strong.\n");
    else 
        printf ("This number is not Strong.\n");

    return 0;
}