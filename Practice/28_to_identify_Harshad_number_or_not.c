#include <stdio.h>

int main() {
    int num, sum = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    int p = num;
    while (p) {
        int r = p % 10;
        sum += r;
        p /= 10;
    }

    if (num % sum == 0) {
        printf("%d is a Harshad Number.\n", num);
    } else {
        printf("%d is not a Harshad Number.\n", num);
    }

    return 0;
}