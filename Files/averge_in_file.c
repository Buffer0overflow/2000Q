/*
Q12: Compute Average Of Numbers In A File
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 96

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\test.txt","r");
    if (NULL == fp)
    {
        printf("Error opening file!\n");
        return -1;
    }
    char buffer[MAX_SIZE];
    float sum,current;
    int numbers = 0;
    while (fgets(buffer,MAX_SIZE,fp))
    {
        current = atof(buffer);
        sum += current;
        numbers++;
    }
    printf("We have read %d numbers\n",numbers);
    printf("Average is:%.2f\n",sum / numbers);
    return 0;
}
