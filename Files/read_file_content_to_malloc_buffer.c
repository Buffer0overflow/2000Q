/*
Q94 : Read All File Contents Into A Dynamically Allocated String
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\123.txt", "r");
    if (NULL == fp)
    {
        printf("Error opening file\n");
        return -1;
    }

    int total = 0;
    while (!feof(fp) && !ferror(fp))
    {
        fgetc(fp);
        total++;
    }
    if (ferror(fp))
        printf("Error reading from file");

    char *buffer = malloc(total);
    int index = 0;
    rewind(fp);
    while (!feof(fp) && !ferror(fp))
    {
        buffer[index] = fgetc(fp);
        index++;
    }
    if (ferror(fp))
        printf("Error reading from file");
    buffer[index - 1] = '\0';
    fclose(fp);

    printf("%s", buffer);
    free(buffer);
    return 0;
}
