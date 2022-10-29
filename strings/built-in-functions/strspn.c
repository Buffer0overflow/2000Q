/*
Q84: Create Your Own strspn() Function
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

size_t my_strspn(const char *s1, const char *s2);

int main(int argc, char const *argv[])
{
    char s1[] = "Helloworld";
    char s2[] = "dlwrH";

    size_t len = strspn(s1, s2);
    printf("BUILT-IN FUNCTION - substring length is %zu\n", len);

    size_t len1 = my_strspn(s1, s2);
    printf("MY STRSPN FUNCTION - substring length is %zu\n", len1);

    return 0;
}
size_t my_strspn(const char *s1, const char *s2)
{
    int count = 0;
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    for (int i = 0; i < len_s1; i++)
    {
        bool found = false;
        for (int j = 0; j < len_s2; j++)
        {
            if (s1[i] == s2[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
            break;
        else
            count++;
    }
    return count;
}