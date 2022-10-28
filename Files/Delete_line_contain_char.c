/*
Q:77 Delete All Lines From A File That Contain A Char From A Group Of Chars
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\file.txt","r");
    FILE *fp_new = fopen("G:\\newFile.txt","w");
    if (NULL == fp || fp_new == NULL) return -1;
    char buffer[BUFSIZ];
    int i;
    bool found = false;

    while (!feof(fp))
    {
         found = false;
        fgets(buffer,BUFSIZ,fp);
        /* check feof again directly after fgets , it true , break so fgets does not process
         last line twice.*/
           if (feof(fp)) break;
           else  printf("%s\n",buffer);
        for ( i = 0 ; i < strlen(buffer) ; i++)
        {
            if (buffer[i] == 'X')
              {
                found = true;
                break;
              }
        }
        if (!found)
              {
                fputs(buffer,fp_new);
              }
    }
    fclose(fp);
    fclose(fp_new);

    remove("G:\\file.txt");
    rename("G:\\newFile.txt","G:\\file.txt");


    return 0;
}
