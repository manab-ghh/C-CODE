#include <stdio.h>

int main() {
    char ch;

    printf ("Enter a charecter: ");
    scanf ("%c", &ch);

    if (ch == 'a' || ch == 'A'
        || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I'
        || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U' ) {

            printf ("Vowel\n");
        }

    else printf ("Consonant\n");

    return 0;
}