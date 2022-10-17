/*
Q30: Sorting An Array Of Strings ( selection sort )
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char strings[10][100] =
        {
            "demonstration",
            "apple",
            "joyful",
            "friends",
            "battle",
            "incredible",
            "example",
            "great",
            "happy",
            "city",
        };
    int length = 10;
    char temp[100];

    for (int i = 0; i < (length - 1); i++)
    {
        int j_min = i;
        for (int j = i + 1; j < length; j++)
            if (strcmp(strings[j], strings[j_min]) < 0)
                j_min = j;
        if (j_min != i)
        {
            strncpy(temp, strings[i], 95);
            strncpy(strings[i], strings[j_min], 95);
            strncpy(strings[j_min], temp, 95);
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
