/*
Q14: Selection Sort
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int arr[]= {5,2,3,1,0,9,8,7,6,4};
    int length = 10;

    for (int i = 0 ; i < length - 1 ; i++)
    {
        int min_pos = i;
        for(int j = i + 1 ; j < length ; j++)
        {
            if (arr[j] < arr[min_pos]) min_pos = j;
        }
        if (min_pos != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_pos];
            arr[min_pos] = temp;
        }
    }
    for (int i = 0 ; i < length ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
