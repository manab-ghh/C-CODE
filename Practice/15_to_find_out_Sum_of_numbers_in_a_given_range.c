#include <stdio.h>

int main() {
    int first, last;

    printf ("Enter the first range and last range: ");
    scanf ("%d%d", &first, &last);

    printf ("The sum of %d to %d natural number is: %d\n", first, last, ((last - first + 1) * (first + last)) / 2);

    return 0;
}