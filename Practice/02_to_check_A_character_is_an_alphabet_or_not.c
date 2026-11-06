#include <stdio.h>

int main() {

    char ch;
    printf ("Enter A Character: ");
    scanf ("%c", &ch);

    if (( (int)ch >= 63 && 90 >= (int)ch ) || ( (int)ch >= 97 && 122 >= (int)ch) ) printf ("Alphabet\n");

    else printf ("Not Alphabet\n");

    return 0;
}