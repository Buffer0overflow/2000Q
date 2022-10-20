/*
Q:42 Fill An Array With Random Numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 8

int main(int argc, char const *argv[])
{
    int arr[ARRAY_SIZE];

    srand( time(0) );
    for (int i = 0 ; i < ARRAY_SIZE ; i++)
    {
        int num = rand() % 20;
        arr[i] = num;
    }

    for (int i = 0 ; i < ARRAY_SIZE ; i++)
        printf("%d ",arr[i]);
    return 0;
}
