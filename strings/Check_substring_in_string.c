/*
Q41: Check If A String Is A Substring Of Another String
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_substring(const char *s,const char *substring);

int main(int argc, char const *argv[])
{
    char string[] = "Hello World";
    char substring[] = "Hello";

    

    return 0;
}
bool is_substring(const char *s,const char *substring)
{
    int slen = strlen(s);
    int sub_len = strlen(substring);
    int end = slen - sub_len + 1 ;
    
}