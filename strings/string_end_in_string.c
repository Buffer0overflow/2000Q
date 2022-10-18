/*
Q34: Check If A String Ends With Another String
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_string_end(const char *s,const char *endSring);

int main(int argc, char const *argv[])
{
    char str[] = "I love coders";
    char endS[] = "coders";
    if (check_string_end(str,endS)) printf("Yes end string ends in main string\n");
    else printf("End string does not end the main string\n");
    return 0;
}

bool check_string_end(const char *s,const char *endSring)
{
    bool endswith = true;
    int s_len = strlen(s);
    int endS_len = strlen(endSring);
    printf("End string length is %d\n",endS_len);
    if (s_len < endS_len) return false;
   

    for (int i = 1 ; i <= endS_len ; i++)
    {
        printf("%c ",s[s_len - i]);
        printf("%c\n",endSring[endS_len - i]);
        if (s[s_len - i] != endSring[endS_len - i])
         return false;
        
    }
    return true;

}
