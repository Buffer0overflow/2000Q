/*
Q88: Count The Number Of Words And Characters In A File
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\123.txt","r");
    if (NULL == fp) 
    {
        printf("Error opening file\n");
        return -1;
    }
    int c;
    int words = 0;
    int characters = 0;
    bool white_space = true;

    while (true)
    {
        c = fgetc(fp);

        if ( c == EOF) break; // if (feof(fp)) works also
        else if (ferror(fp))
        {
         printf("Error reading file\n");
         return -1;
        }
        characters++;
        if (white_space && !isspace(c))
        {
            words++;
            white_space = false;
        }
        else if (!white_space && isspace(c))
            white_space = true;
    }

    fclose(fp);
    printf("No of words %d\n",words);
    printf("No of characters %d\n",characters);



    return 0;
}
