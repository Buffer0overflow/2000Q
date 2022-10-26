/*
Q69: Create Your Own strcpy() String Copy Function
*/

#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char str[]="Hello world";
    char dest[BUFSIZ];
    char dest_sprintf[BUFSIZ];

    size_t len = strlen(str);
    size_t i;
    for (i = 0 ; i < len ; dest[i] = str[i], i++)
    
     dest[i] = '\0';
     sprintf(dest_sprintf,str);
    printf("%s || %s || %s\n",str,dest,dest_sprintf);

    return 0;
}
