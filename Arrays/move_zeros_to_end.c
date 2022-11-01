/*
Q38 : Move All Zeros In An Array To The End
*/

#include <stdio.h>

void move_zeros(int arr[], int length);

int main(int argc, char const *argv[])
{
    int array[] = {0, 1, 0, 5, 6, 9, 0, 7, 0, 1};
    move_zeros(array, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
void move_zeros(int arr[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    for (int i = count; i < length; i++)
    {
        arr[i] = 0;
    }
}
