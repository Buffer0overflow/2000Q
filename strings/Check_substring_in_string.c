/*
Q41: Check If A String Is A Substring Of Another String
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_substring(const char *s,const char *substring);

int main(int argc, char const *argv[])
{
    char string[] = "Hello ";
    char substring[] = "Hello";

    if(is_substring(string,substring))
        printf("substring is part of string\n");
    else
        printf("Substring is NOT part of string\n");
    return 0;
}
bool is_substring(const char *s,const char *substring)
{
    int slen = strlen(s);
    int sub_len = strlen(substring);
    int end = slen - sub_len + 1 ;
    bool isSubstring = true;

    for (int i = 0 ; i < end ; i++)
    {
        for (int j = 0 ; j < sub_len ; j++)
        {
            if (substring[j] != s[j + i])
            {
                isSubstring = false;
                break;
            }
        }
        if (isSubstring) return true;
    }
    return false;
}