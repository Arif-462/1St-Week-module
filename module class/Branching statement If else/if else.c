
// Write a C program to check whether a character is an alphabet, digit or special character.

#include <stdio.h>

int main ()
{


    char c;
    scanf("%c", &c);
    if(c >= '0' && c <= '9')
        printf("digit");

    else if

    ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("Character Alphabet");

    else
        printf("Special character");

    return 0;
}
