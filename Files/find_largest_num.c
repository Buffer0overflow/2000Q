/*
Q4: Find The Largest Number In A File
*/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 96
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\test.txt","r");
    if (fp == NULL)
    {
        printf("Error opening the file!\n");
        return -1;
    }
    char buffer[BUFFER_SIZE];
    int largest ,current ,numbers = 0;
    while(fgets(buffer,BUFFER_SIZE,fp))
    {
        int current = atoi(buffer);
        if (numbers == 0) largest = current;
        else if (current > largest)
        {
            largest = current;
        }
        numbers++;
    }
    printf("Largest value in the file is:%d\n",largest);
    printf("We have read %d numbers from the file\n",numbers);
    fclose(fp);
    return 0;
}
