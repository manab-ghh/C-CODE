#include <stdio.h>
#define PI 3.14

int main() {
    double radius, area;

    printf ("Enter the value of the radius: ");
    scanf ("%lf", &radius);

    area = PI * radius * radius;

    printf ("The area of the circle is: %lf\n", area);

    return 0;
}