/*
Q20 : Delete A Specific Line From A File
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1048


int main(int argc, char const *argv[])
{
    FILE *fpOriginal = fopen("G:\\test.txt","r");
    FILE *fpCopy = fopen("G:\\tmp.txt","w");
    char buffer[BUFFER_SIZE];
    int line_Number = 1;
    int delete_line;
    printf("Enter a line number to delete:");
    scanf(" %d",&delete_line);

    do
    {
        if(fgets(buffer,BUFFER_SIZE,fpOriginal))
        if (delete_line != line_Number) 
        {
            fprintf(fpCopy,buffer);
        }
        line_Number++;
    } while (!feof(fpOriginal));

    fclose(fpCopy);
    fclose(fpOriginal);

     remove("G:\\test.txt");
     rename("G:\\tmp.txt", "G:\\test.txt");

    return 0;
}
