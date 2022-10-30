/*
Q98: Print An Array In Reverse 
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6};
    int length = 6;
    for (int i = length - 1 ; i >= 0 ; i--)
        printf("%d ",arr[i]);
    return 0;
}
