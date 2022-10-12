/*
Removing all occurrences of a character from a string | C Programming Example
*/

#include <stdio.h>
#include <string.h>

void remove_char(char *s , char c);

int main()
{

char s[] = "My name is hacker and I'm here to hack";


printf("before removing , the string is %s\n",s);
remove_char(s,'h');
printf("after removing  , the string is %s\n",s);

    return 0;
}

void remove_char(char *s , char c)
{

int i = 0 ; 

while ( s[i])
{
    if (s[i] == c)
    {
       int newposition = i ; 
       while (s[newposition] != '\0')
       {
        s[newposition] = s[newposition + 1] ;
        newposition++;
       }
    }
    else  i++;
    
}

}