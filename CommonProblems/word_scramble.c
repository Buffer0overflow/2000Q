/*
Q27: Word Scramble Game ( ** INCOMPLETE CODE **)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void scramble(char *s);


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char str[100] = "Friends";
    char original[100];
    char scrambled[100];
    strncpy(scrambled,str,99);
    scramble(str);
    return 0;
}

void scramble(char *s)
{
    int length = strlen(s);
    for (int i = 0 ; i < length ; i++)
        s[i] = tolower(s[i]);
    
    if (1 == length)
    {
        printf("String is 1 character and too short to scrubme\n");
        return;
    }
    if (2 == length)
    {
        char temp = s[0];
        s[0] = s[1];
        s[1] = temp;
        return;
    }
   char original[length + 1];
    strncpy(original,s,25);
    
    do
    {
       int i = 0;

       while ( i < length)
       {
        int pos1 = rand() % length;
        int pos2 = rand() % length;

        if (pos1 != pos2)
        {
            char temp = s[pos1];
            s[pos1] = s[pos2];
            s[pos2] = temp;
            i++;
        }
       }
    } while (/* condition */);
    
}