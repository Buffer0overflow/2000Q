/*
Find The Second Lowest Number In An Array
*/

#include <stdio.h>

int second_lowest(int arr[],int length);

int main(int argc, char const *argv[])
{
    int arr[]= {5,2,69,999,631,652,1053,1,0,3,9};
    int second_lowest1 = second_lowest(arr,11);
    printf("Second lowest number is: %d\n",second_lowest1);
    return 0;
}
int second_lowest(int arr[],int length)
{
    int min1,min2;
    if (arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }
    for (int i = 0 ; i < length ; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if ( arr[1] < min1 && arr[i] > min2 )
        {
            min2 = arr[i];
        }
    }

    return min2;

}