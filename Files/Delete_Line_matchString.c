/*
Q40 :Delete All File Lines That Match A String
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\test.txt","r");
    FILE *fpDest = fopen("G:\\test_tmp.txt","w");
    char buffer[]="abc 123\n";
    char buffer_line[2048];

    while (!feof(fp))
    {
        fgets(buffer_line,2048,fp);
        if (strcmp(buffer,buffer_line) != 0)
        {
            fprintf(fpDest,buffer_line);
        }
    }
    fclose(fp);
    fclose(fpDest);
    remove("G:\\test.txt");
    rename("G:\\test_tmp.txt","G:\\test.txt");
    return 0;
}
