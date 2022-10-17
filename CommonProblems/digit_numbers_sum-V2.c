/*
Q29 : Sum The Digits Of A Number v2.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char buffer[96];
    char stringArrayBuffer[2];
    printf("Enter a number:");
    scanf("%s", buffer);
    int sum;
    int current;
    int length = strlen(buffer);
    printf("sum of ");
    for (int i = 0; i < length; i++)
    {

        stringArrayBuffer[0] = buffer[i];
        stringArrayBuffer[1] = '\0';
        current = atoi(stringArrayBuffer);
        if (i != length - 1)
            printf("%d + ", current);
        else
            printf("%d ", current);
        sum += current;
    }
    printf("= %d\n", sum);

    return 0;
}
