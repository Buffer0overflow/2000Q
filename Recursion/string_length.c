/*
Q76: Calculate String Length Using Recursion
*/

#include <stdio.h>

int my_strlen(char *s);

int main(int argc, char const *argv[])
{
    char str[]="Ali";
    int length = my_strlen(str);
    printf("string length is:%d\n",length);
    return 0;
}
int my_strlen(char *s)
{
    if (*s) return 1 + my_strlen(++s);
    else return 0;
}
