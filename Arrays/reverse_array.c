/*
Q103: Reverse An Array
*/

#include <stdio.h>

void reverse_array(int arr[], int length);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse_array(arr, 5);

    return 0;
}
void reverse_array(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }

    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
}