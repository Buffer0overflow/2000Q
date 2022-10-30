/*
Q97: Create Your Own strchr() Function
*/

#include <string.h>
#include <stdio.h>

char *my_strchr(const char *s, char c);

int main(int argc, char const *argv[])
{
    char *str = "Hello world";
    printf("%s", strchr(str, 'w'));

    char *My_str = my_strchr(str, 'w');
    if (My_str)
    {
        printf("\n%s", My_str);
    }
    else
        printf("Character not found in the string\n");

    return 0;
}
char *my_strchr(const char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
    return NULL;
}
