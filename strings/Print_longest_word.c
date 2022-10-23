/*
Q58: Find And Print The Longest Word In A String
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *longest_word(char *s);

int main(int argc, char const *argv[])
{
    char str[] = "sorry if this is a stupid question, i'm new to programming";
    char *Longest = longest_word(str);
    printf("Longest word is:%s\n", Longest);
    free(Longest);

    return 0;
}
char *longest_word(char *s)
{

    int length = strlen(s);
    char nonWords[] = " .,;\n\t-";
    int max = -1;
    int count = 0;
    char temp_buffer[256];
    char max_word[256];

    int i = 0;
    while (i < length)
    {
        count = 0; 
        while (i < length)
        {
            if (strchr(nonWords, s[i]) != NULL)
                break;
            temp_buffer[count++] = s[i++];
        }
        temp_buffer[count] = '\0';
        if (count > max)
        {
            max = count;
            strcpy(max_word, temp_buffer);
        }

        while (i < length)
        {
            if (strchr(nonWords, s[i]) == NULL)
                break;
            i++;
        }
    }
    char *word = malloc(sizeof(char) * (max + 1));
    strcpy(word, max_word);
    return word;
}