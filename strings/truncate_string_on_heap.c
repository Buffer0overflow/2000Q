/*
Q99 : Truncate A Dynamically Allocated String
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *truncate_string(char *s,int position);

int main(int argc, char const *argv[])
{
    char *str = malloc(50);
    strncpy(str,"Hello world",12);

    printf("String before truncate: %s\n",str);
    
    truncate_string(str,5);
    
    printf("String after truncate: %s\n",str);
    free(str);


    return 0;
}
char *truncate_string(char *s,int position)
{
    s[position] ='\0';
    return realloc(s,position + 1); 

}