/*
Q6: print source code on screen
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen(__FILE__,"r");
    int c;
    while( (c = getc(fp)) != EOF)
    {
       putchar(c);
    }
    fclose(fp);
    return 0;
}
