/*
Q:54 Read A Specific Line From A File
*/

#include <stdio.h>
#include <stdlib.h>

void read_line(FILE *fp,int line_number);

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\read_line.txt","r");
    if ( NULL == fp)
    {
        printf("Error opening the file!\n");
        return -1 ;
    }

    read_line(fp,8);
    return 0;
}
void read_line(FILE *fp,int line_number)
{
    char buffer[100];
    int count = 0;
    while (!feof(fp))
    {
        if(fgets(buffer,100,fp))
    {
        count++;
        if(count == line_number)
        {
            printf("%s",buffer);
            fclose(fp);
            return ;
        }
    }
    }
    printf("Sorry , Line number %d is not in the file!\n",line_number);
    fclose(fp);
}