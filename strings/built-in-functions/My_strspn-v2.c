/*
Q85: Create Your Own strspn() Function
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

size_t my_strspn(const char *s1, const char *s2);

int main(int argc, char const *argv[])
{
    char s1[] = "Hello world";
    char s2[] = "dlwrHeo";

    size_t len = strspn(s1, s2);
    printf("BUILT-IN FUNCTION - substring length is %zu\n", len);

    size_t len1 = my_strspn(s1, s2);
    printf("MY STRSPN FUNCTION - substring length is %zu\n", len1);

    return 0;
}
size_t my_strspn(const char *s1, const char *s2)
{
    int count = 0;
   if (s1 == NULL || s2 == NULL)
    return count;

    while (*s1 && strchr(s2,*s1++))
    {
        count++;
    }
    return count;
}