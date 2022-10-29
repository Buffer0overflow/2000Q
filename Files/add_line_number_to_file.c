/*
Q91 : Add Line Numbers To A File
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Usage: add_line. <File path>\n");
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
        int buffer_length = strlen(buffer);
        int length = snprintf( NULL, 0, "%d", line_number );
        char *num_buffer = malloc(length + buffer_length + 2); 
        snprintf( num_buffer, length + 2, "%d ", line_number);
        line_number++;
        strcat(num_buffer,buffer);
        fputs(num_buffer,fp_write);
        printf("%s\n",num_buffer);
        free(num_buffer);
    }


    fclose(fp);

    return 0;
}
