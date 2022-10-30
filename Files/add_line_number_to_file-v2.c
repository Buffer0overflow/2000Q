/*
Q91 : Add Line Numbers To A File
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Usage: add_line.exe <File path>\n");
        return -1;
    }
    FILE *fp = fopen(argv[1],"r");
    FILE *fp_write = fopen(argv[1],"r+");
    if (NULL == fp || NULL == fp_write)
    {
        puts("Error openinf file");
        return -2;
    }

    char buffer[BUFSIZ];
    int line_number = 1;


    while (true)
    {
        fgets(buffer,BUFSIZ,fp);
        if(feof(fp)) break;
        fprintf(fp_write,"%d %s",line_number,buffer);
        line_number++;
        
    }


    fclose(fp);

    return 0;
}
