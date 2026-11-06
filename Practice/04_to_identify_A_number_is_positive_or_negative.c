#include <stdio.h>

int main() {
    int n;

    printf ("Enter a Number: ");
    scanf ("%d", &n);

    if (n >= 0) printf ("The Number Positive.\n");
    else printf ("The Number is negative.\n");

    return 0;
}