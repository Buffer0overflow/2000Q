/*
Q87 : Remove Duplicate Array Elements
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *remove_array(int arr[], int length, int *new_length);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 1, 2, 4, 5, 6, 6, 7, 8, 9, 9};
    int length = 13;
    int length_after = 0;
    int *after = remove_array(arr, length, &length_after);
    for (int i = 0; i < length_after; i++)
        printf("%d ", after[i]);
    free(after);

    return 0;
}

int *remove_array(int arr[], int length, int *new_length)
{
    int *new_array = malloc(length * sizeof(int));
    int unique_count = 0;

    for (int i = 0; i < length; i++)
    {
        bool is_unique = true;
        for (int j = 0; j < unique_count; j++)
        {
            if (arr[i] == new_array[j])
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique)
        {
            new_array[unique_count++] = arr[i];
        }
    }
    if (unique_count != length)
        new_array = realloc(new_array, sizeof(int) * unique_count);
    *new_length = unique_count;
    return new_array;
}