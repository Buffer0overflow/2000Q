/*
Q35: Check If A String Starts With Another String
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    char *str="Hello world from C programming";
    char *startS = "Hello";
    int length = strlen(startS);
    bool status;
    if (strlen(startS) > strlen(str)) 
    {
     printf("string does NOT start in the main string\n");
     return 0;   
    }

    int i = 0 ; 
    while (i < length)
    {
        if (*str != *startS)
             status = false;
        str++;
        startS++;
        i++;
        status = true;
    }
    if (status) printf("Start string start in the main string\n");
    else printf("string does NOT start in the main string\n");
   
    return 0;
}
