#include <stdio.h>

int main() {
    int n;

    printf ("Enter a number:");
    scanf ("%d", &n);

    int flag = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag) 
        printf ("This Number is prime\n");
    else 
        printf ("This Number is not prime\n");

    return 0;
}