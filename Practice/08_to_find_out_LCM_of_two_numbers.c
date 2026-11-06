#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) return a;

    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;

    return abs((a / gcd(a, b)) * b);
}

int main() {
    int a, b;

    printf ("Enter two Number: ");
    scanf ("%d%d", &a, &b);

    printf ("The LCM of %d, %d is: %d\n", a, b, lcm(a, b));

    return 0;
}