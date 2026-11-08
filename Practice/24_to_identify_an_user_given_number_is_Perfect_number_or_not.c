#include <stdio.h>

int main() {
    int num, s = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    for (int i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            s += i;
        }
    }

    if (num == s) printf ("This Number is perfect Number.\n");
    else printf ("This Number is not Perfect.\n");

    return 0;
}