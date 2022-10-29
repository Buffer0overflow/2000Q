/*
Q82:Read And Store Each Line Of A File Into An Array Of Strings
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\file.txt","r");
    if (NULL == fp) return -1;

    char strings[4][BUFSIZ];
    int i = 0;
    while (!feof(fp))
    {
        fgets(strings[i],BUFSIZ,fp);
        if (feof(fp)) break;
        i++;
    }
    for (int i = 0 ; i < 4 ; i++)
        printf("%s",strings[i]);

    fclose(fp); 

    return 0;
}
