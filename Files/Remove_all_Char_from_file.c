/*
Q73 : Remove All Occurrences Of A Char From A File (Without Using A Temp File)
*/

#include <stdio.h>
#include <io.h> // header file for _chsize function


int main(int argc, char const *argv[])
{
    FILE *fp_read = fopen("G:\\file.txt","r");
    FILE *fp_write = fopen("G:\\file.txt","r+");
    if (NULL == fp_read || NULL == fp_write) return -1;

    int count = 0;
    int c;
    while ( (c =fgetc(fp_read)) != EOF)
    {
        //c = fgetc(fp_read);
        if (c != 'Z')
        {
            fputc(c,fp_write);
            count++;
        }
    }

    _chsize(fileno(fp_write), count); // for windows OS
    
    // FOR POSIX OS
    // if (truncate("G:\\file.txt",count) == -1)
    // {
    //     printf("Error truncate the file\n");
    //     return -1;
    // }


    return 0;
}
