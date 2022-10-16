/*
Q23: Split A String At An Index Into Two Strings using pointers
*/

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 14

void split_string(char *s, int index, char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char s[] = "How are you ?";
    char s1[BUFFER_SIZE], s2[BUFFER_SIZE];
    int index = 8;
    split_string(s, index, s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}

void split_string(char *s, int index, char *s1, char *s2)
{
    int length = strlen(s);
    char *Ptr_s1 = s1;
    char *Ptr_s2 = s2;
    int pos = 0;
    while (pos < index)
    {
        *Ptr_s1++ = *s++;
        pos++;
    }
    *Ptr_s1 = '\0';

    while (index <= length)
    {
        *Ptr_s2++ = *s++;
        index++;
    }
}