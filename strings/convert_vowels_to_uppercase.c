/*
Q105:Convert The Vowels In A String To Uppercase
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[] = "i love you mama";
    size_t len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]))
        {
            switch (str[i])
            {
            case 'a':
                str[i] = toupper(str[i]);
            case 'i':
                str[i] = toupper(str[i]);
            case 'o':
                str[i] = toupper(str[i]);
            case 'u':
                str[i] = toupper(str[i]);
            case 'y':
                str[i] = toupper(str[i]);
            case 'e':
                str[i] = toupper(str[i]);

            default:
                break;
            }
        }
    }
        printf("%s",str);

    return 0;
}
