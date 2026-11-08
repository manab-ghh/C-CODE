#include <stdio.h>

int main() {
    int num, rev = 0;

    printf ("Enter a Number: ");
    scanf ("%d", &num);

    while (num > 0) {
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    
    printf ("The reverse number is %d.\n", rev);
    
    return 0;
}