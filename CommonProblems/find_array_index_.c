/*
Q71: Find The Index Of K In A Sorted Array OR Where It Belongs To Keep It Sorted
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,4,7,9};
    int element = -1;
    int length = 5;
    if (arr[length] < element)
    {
        printf("Element %d not found - it should be inserted at index %d\n",element,length);
    }

    for (int i = 0 ; i < 5 ; i++)
    {
        if(arr[i] >= element)
        {
            printf("element %d found/should be at index %d\n",element,i);
            break;
        }
        
    }
    return 0;
}
