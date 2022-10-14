/*
Find The Second Highest Number In An Array
*/

#include <stdio.h>

int second_highest(int arr[],int length);

int main(int argc, char const *argv[])
{
    int arr[]= {5,2,69,999,631,652,1053,1,2,3,9};
    int second_Highest = second_highest(arr,11);
    printf("Second highest number is: %d\n",second_Highest);
    return 0;
}
int second_highest(int arr[],int length)
{
    int max1,max2;
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (int i = 0 ; i < length ; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if ( arr[1] < max1 && arr[i] > max2 )
        {
            max2 = arr[i];
        }
    }

    return max2;

}