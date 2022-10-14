/*
Q11: Remove a character from a string at a specified position
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeChar (char *s,int pos);

int main(int argc, char const *argv[])
{
    char s[]="How are you my dear friend?";
    removeChar(s,4);
    printf("%s\n",s);
    return 0;
}

void removeChar (char *s,int pos)
{
    int length = strlen(s);
    if (pos >= length) 
    {
        printf("Can't remove the char\n");
        exit(1) ;
    }
    for (int i = 4 ; i < length ; i++)
    {
        s[i] = s[i+1];
    }

}
