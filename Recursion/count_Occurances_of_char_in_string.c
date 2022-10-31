/*
Q107 : Count The Occurrences Of A Character In A String Using Recursion
*/

#include <stdio.h>
#include <string.h>

int count_occurance(const char *s,char c);

int main(int argc, char const *argv[])
{
    char str[]= "Helloooo World";
    printf("Occurances for letter o is:%d\n",count_occurance(str,'o'));
    return 0;
}
int count_occurance(const char *s,char c)
{
    if (!*s) return 0;
    else if (*s == c)
        return 1 + count_occurance(s + 1,c);
    else
        return count_occurance(s + 1 ,c);
}