/*
Q70: Create Your Own strcpy() String Copy Function using pointer arithmatic
*/

#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char str[]="Hello world";
    char dest[BUFSIZ];
    char *ptr_src = str;
    char *ptr_dest = dest;
    
    while (*ptr_src)
    {
        *ptr_dest++ = *ptr_src++;
    }
    *ptr_dest = '\0';

    printf("src: %s\n",str);
    printf("dest: %s\n",dest);
    return 0;
}
