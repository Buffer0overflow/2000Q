/*
Q9: Count The Letters In A String
*/

#include <stdio.h>
#include <ctype.h>

int count_letters(const char *s);

int main(int argc, char const *argv[])
{
    char *s="code code(){}";
    printf("Number of letters in the string is:%d\n",count_letters(s));
    return 0;
}
int count_letters(const char *s)
{
    int count = 0;
    for (*s ; *s != '\0' ; s++)
    {
        if(isalpha(*s))
        count++;
    }
    return count;
}
