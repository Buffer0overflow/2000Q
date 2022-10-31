/*
Q103: Reverse An Array Using Recursion
*/

#include <stdio.h>

void reverse_array(int arr[], int low, int high);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;
    reverse_array(arr, 0, length - 1);
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);

    return 0;
}
void reverse_array(int arr[], int low, int high)
{
    if (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        reverse_array(arr, low + 1, high - 1);
    }
}
