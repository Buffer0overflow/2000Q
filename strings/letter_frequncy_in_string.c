/*
Q93 : Find The Frequency Of Each Letter In A String
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
    char str[] = "Find The Frequency Of Each Letter In A String www.google.com";
    int c;
    int letters[26] = {0};
    int length = strlen(str);

    for (int i = 0 ; i < length ; i++)
    {
        if(isalpha(c = tolower(str[i])))
        {
            letters[c - 'a']++;
        }
    }

    for (int i = 0 ; i < 26 ; i++)
        printf("%c = %d\n",'a' + i , letters[i]);
    return 0;
}
