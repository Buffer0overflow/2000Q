/*
Q78 : Count The Vowels In A String Using Recursion //A, E, I, O, U,
*/

int count_vowels(char *s);

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[] = "eEe";
    int result = count_vowels(str);
    printf("No of vowels:%d\n", result);

    return 0;
}

int count_vowels(char *s)
{

    if (*s == '\0')
        return 0;

    char c = toupper(*s);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return 1 + count_vowels(++s);
    else
        return count_vowels(++s);
}