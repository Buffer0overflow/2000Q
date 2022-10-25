/*
Q67: Reverse A File on Windows OS.
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *fp = fopen("file.txt","r");
    if (NULL == fp)
    {
        puts("Error opening file");
        return -1;
    }

    fseek(fp,0,SEEK_END); 
    int len = ftell(fp); 
    printf("Length at end is %ld\n",len);
    fseek(fp,-1,SEEK_CUR);  
    while ( len > 0)
    {
        char c = fgetc(fp);
        printf("%c",c);
        if ( c == '\n')
          fseek(fp,-3,SEEK_CUR);
        else
        fseek(fp,-2,SEEK_CUR);
        len--;
    }
    
    fclose(fp);
    return 0;
}
