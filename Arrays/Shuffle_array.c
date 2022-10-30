/*
Q53: Shuffle An Array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 12

void shuffle_array(int arr[],int length);

int main(int argc, char const *argv[])
{
    int arr[ARRAY_SIZE];
    for (int i = 0 ; i < ARRAY_SIZE ; i++)
        {
            arr[i] = i + 1;
            printf("%d ",arr[i]);
        }
        printf("\n");
    shuffle_array(arr,ARRAY_SIZE);

    for (int i = 0 ; i < ARRAY_SIZE ; i++)
        {
            printf("%d ",arr[i]);
        }

    return 0;
}

void shuffle_array(int arr[],int length)
{
    srand( time(0) );
    int temp,swap_index;

    for (int i = 0 ; i < length ; i++)
    {
        swap_index = rand() % length ;
        temp = arr[i];
        arr[i] = arr[swap_index];
        arr[swap_index] = temp;
    }
}