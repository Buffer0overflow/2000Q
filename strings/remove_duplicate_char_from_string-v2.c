/*
Q101: Remove Duplicate Characters From A String
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void remove_duplicate(char *s);

int main(int argc, char const *argv[])
{
    char str[]="aabbc a bc d a^^";
    remove_duplicate(str);
    printf("%s",str);
    return 0;
}
void remove_duplicate(char *s)
{
    int length = strlen(s);
    bool char_found[256] = {false}; // 256 is number of extended ASCII Characters
    int index = 0;
    for (int i = 0 ; i < length ; i++)
    {
        if (!char_found[s[i]])
        {
            char_found[s[i]] = true;
            s[index++] = s[i];
        }
    }
    s[index]='\0';
   
 
}