#include <stdio.h>

int main() {
    int num, p, s = 0;

    printf ("Enter a number a Number: ");
    scanf ("%d", &num);

    p = num;

    while (num) {
        int r = num % 10;
        s = s * 10 + r;
        num /= 10;
    }

    if (s == p) 
        printf ("This Number is palindrome\n");
    else
        printf ("This number is not palindrome\n");

    return 0;
}