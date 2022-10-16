/*
Q22: Split A String At An Index Into Two Strings
*/

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 96

void split_string(char *s,int index,char *s1,char *s2);

int main(int argc, char const *argv[])
{
    char s[] = "How are you , my great prgorammer?";
    char s1[BUFFER_SIZE] , s2[BUFFER_SIZE];
    int index = 14;
    split_string(s,index,s1,s2);

    printf("%s\n",s1);
    printf("%s\n",s2);


    
    return 0;
}

void split_string(char *s,int index,char *s1,char *s2)
{
   
   int length = strlen(s);
   for (int i = 0 ; i < index ; i++)
   {
    s1[i] = s[i];
   }
    s1[index] = '\0';

    for (int i = index ; i <= length ; i++ ) // we do [<=] so we can copy '\0' from s instead of manually assign it
        s2[i - index] = s[i];
}