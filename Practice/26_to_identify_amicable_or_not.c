#include <stdio.h>

int sumOfDiv(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int num1, num2;

    printf ("Enter two number: ");
    scanf ("%d%d", &num1, &num2);

    int sum1 = sumOfDiv(num1);
    int sum2 = sumOfDiv(num2);

    if (num1 > 0 && num2 > 0 && sum1 == num2 && sum2 == num1) {
        printf("%d and %d are Amicable Numbers.\n", num1, num2);

    } else {
        printf("%d and %d are not Amicable Numbers.\n", num1, num2);
    }

    return 0;
}