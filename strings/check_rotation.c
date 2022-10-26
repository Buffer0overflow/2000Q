/*
Q63: Check If A String Is A Rotation Of Another String
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_rotation(char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char str1[] = "ABCDE";
    char str2[] = "CDEAB";

    if (is_rotation(str1, str2))
        printf("string %s is a rotation of string %s\n", str2, str1);
    else
        printf("string %s is NOT a rotation of string %s\n", str2, str1);
    return 0;
}

bool is_rotation(char *s1, char *s2)
{
    int length_s1 = strlen(s1);
    int length_s2 = strlen(s2);
    if (length_s1 != length_s2)
        return false;
    int new_length = (length_s1 * 2) + 1;
    char *temp_buffer = malloc(sizeof(char) * new_length);
    strcpy(temp_buffer, s1);
    strcat(temp_buffer, s1);
    printf("temp buffer nos is:%s\n", temp_buffer);
    printf("s2 string now is %s\n", s2);

    if (strstr(temp_buffer, s2))

    {
        free(temp_buffer);
        return true;
    }
    else
    {
        free(temp_buffer);
        return false;
    }
}