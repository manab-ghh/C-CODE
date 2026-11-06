#include <stdio.h>

int main() {
    int n;

    printf ("Enter a Number: ");
    scanf ("%d", &n);

    if (n%2 == 0) 
        printf ("The Number is even.\n");
    else
        printf ("The number is odd.\n");

    return 0;
}