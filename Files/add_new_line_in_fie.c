/*
Q57: Write To A Specific Line Of A File And Shift Down The Remaining Lines 
*/

#include <stdio.h>
#include <string.h>


#define MAX_SIZE 2048



int main(int argc, char const *argv[])
{
    
    int replace_line_num = 4;
    int line_counter = 1;
    char buffer[MAX_SIZE];
    char temp_buffer[MAX_SIZE];
    char fileName[MAX_SIZE];
    printf("Enter file name:");
    scanf("%s",fileName);
    FILE *fp = fopen(fileName,"r");
    FILE *fp_tmp = fopen("G:\\temp.txt","w");
    if (NULL == fp || NULL == fp_tmp)
    {
        printf("Error opening the file\n");
        return 0 ;
    }
    while (!feof(fp))
    {
        fgets(buffer,MAX_SIZE,fp);
        
            if ( line_counter == replace_line_num)
                {
                    fputs(fileName,fp_tmp);
                    fputc('\n',fp_tmp);
                    fputs(buffer,fp_tmp);
                }
            else 
            fputs(buffer,fp_tmp);
        line_counter++;
    }

    fclose(fp);
    fclose(fp_tmp);
    remove(fileName);
    rename("G:\\temp.txt",fileName);
    return 0;
}

