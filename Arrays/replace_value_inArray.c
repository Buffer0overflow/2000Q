/*
Q:43 Replace All Occurrences Of A Value In An Array With Another Value
*/

#include <stdio.h>

void replace_value(int arr[], int length, int value, int newValue);

int main(int argc, char const *argv[])
{
    int arr[] = {5, 6, 2, 3, 1, 2, 2, 2, 1, 55};
    unsigned length = 10;
    printf("Array before value removal:");
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Array after value removal :");
    replace_value(arr, length, 2, 8);

    return 0;
}

void replace_value(int arr[], int length, int value, int newValue)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == value)
        {
            arr[i] = newValue;
            printf("%d ", arr[i]);
        }
        else
            printf("%d ", arr[i]);
    }
}