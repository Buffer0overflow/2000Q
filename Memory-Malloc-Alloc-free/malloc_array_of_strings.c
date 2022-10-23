/*
Q60: Dynamically Allocate Memory For An Array Of Strings
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096
int main(int argc, char const *argv[])
{
    char **strings;
    int total = 0;

    printf("Enter number of strings:");
    scanf("%d",&total);
    while (getchar()!='\n');
    printf("\n");

    strings = malloc(total * sizeof(char *));

    char buffer[BUFFER_SIZE];
    int length = 0;

    int i = 0;
    while ( i < total)
    {
        printf("Enter string %d:",i+1);
        fgets(buffer,BUFFER_SIZE,stdin);
        length = strlen(buffer);
        buffer[length - 1] = '\0';
        strings[i] = malloc(sizeof(char) * length);
        strcpy(strings[i] , buffer);
        printf("string[%d] is: %s\n",i,strings[i]);
        i++;
    }

    return 0;
}
