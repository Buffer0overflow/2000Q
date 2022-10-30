/*
Q92 : Fill An Array With Unique Random Numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ARRAY_SIZE 5

int main(int argc, char const *argv[])
{
    int arr[ARRAY_SIZE];
    srand(time(NULL));
    bool unique;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        int random;
        unique = true;
        do
        {
            random = (rand() % 59) + 1;
            for (int j = 0; j < i; j++)
            {
                if (random == arr[j])
                    unique = false;
            }
        } while (!unique);

        arr[i] = random;
        printf("%d ", arr[i]);
    }
    return 0;
}
