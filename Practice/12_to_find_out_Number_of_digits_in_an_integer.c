#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digiCount = 0;

    printf ("Enter a Number: ");
    scanf ("%d", &num);

    num = abs(num);

    while (num > 0) {
        num /= 10;
        digiCount++;
    }

    printf ("The number of digits in this integer is: %d\n", digiCount);

    return 0;
}