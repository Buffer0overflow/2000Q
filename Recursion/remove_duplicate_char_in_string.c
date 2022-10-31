/*
Q104: Remove duplicate characters from a string using recursion
*/

#include <stdio.h>

char *remove_duplicates(char *s)
{
    if (*s)
    {
        if (*s == *(s + 1))
        {
            *(s + 1) = *(s + 2);
            remove_duplicates(s + 1);
            remove_duplicates(s);
        }
        else
        {
            remove_duplicates(s + 1);
        }
    }

    return s;
}

int main(void)
{
    char s[] = "BBRRAAZZIILL";

    remove_duplicates(s);

    puts(s);

    return 0;
}