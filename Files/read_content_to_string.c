/*
Q74 : Read All File Contents Into A String
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\file.txt","r");
    if (NULL == fp) return -1;

    char buffer[BUFSIZ * 4];
    char c;
    int i = 0;
    while ((c = fgetc(fp)) != EOF)
    {
       buffer[i++] = c;
    }
    buffer[i] = '\0';
    printf("%s\n",buffer);

    return 0;
}
