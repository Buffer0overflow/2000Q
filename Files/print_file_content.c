/*
Read A File And Display Its Contents
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\readme.txt","r");
    if (NULL == fp)
    {
        printf("Error opening the file!\n");
        return -1;
    }
    char buffer[4096];
    while (!feof(fp))
    {
        /*
        check return value of fgets so we can exit loop before last line printed twice.
        */
        if (fgets(buffer,4095,fp))
        printf("%s",buffer);
    }
    
    fclose(fp);

    return 0;
}
