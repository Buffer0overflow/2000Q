/*
Q86: Create Your Own strspn() Function using recursion 
*/

#include <stdio.h>
#include <string.h>

size_t my_strspn(const char *s1, const char *s2);

int main(int argc, char const *argv[])
{
    char s1[] = "ABCDEF";
    char s2[] = "0A245BFCD";

    size_t len = strspn(s1, s2);
    printf("BUILT-IN FUNCTION - substring length is %zu\n", len);

    size_t len1 = my_strspn(s1, s2);
    printf("MY STRSPN FUNCTION - substring length is %zu\n", len1);

    return 0;
}
size_t my_strspn(const char *s1, const char *s2)
{
   if (s1 == NULL || s2 == NULL)
    return 0;

    if (*s1 && strchr(s2,*s1++))
        return 1 + my_strspn(s1,s2);
    else return 0;
}