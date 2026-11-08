#include <stdio.h>
#include <math.h>

int main() {
    int num, s = 0;

    printf ("enter a number: ");
    scanf ("%d", &num);

    int p = num;
    int digiCount = 0;

    while (p) {
        digiCount++;
        p /= 10;
    }

    int q = num;

    while (q) {
        int r = q % 10;
        s += pow(r, digiCount);
        q /= 10;
    }

    if (s == num)
        printf ("The number is Armstrong.\n");
    else 
        printf ("This Number is not Armstrong.\n");


    return 0;
}