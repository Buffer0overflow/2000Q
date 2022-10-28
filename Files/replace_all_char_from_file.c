/*
Q72 : Replace All Occurrences Of A Char From A File with another Char.
*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\file.txt", "r+");
    if (NULL == fp)
    {
        printf("Error opening file\n");
        return -1;
    }
    char rm = 'Z';
    int c;
    do 
    {
        c = fgetc(fp);
        if ( c == rm)
        {
            fseek(fp,-1,SEEK_CUR);
            fputc('X',fp);
            fseek(fp,0,SEEK_CUR);
        }
       
    } while (c != EOF);
    fclose(fp);
    return 0;
}
