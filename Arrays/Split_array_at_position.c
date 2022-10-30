/*
Q102:Split An Array At A Specific Index
*/

#include <stdio.h>

#define SPLIT_INDEX 4
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8};
    int length = 8;
    
    int new_arr[SPLIT_INDEX];
    int i;
    for (i = 0 ; i < 4 ; i++)
        printf("%d ",arr[i]);
    printf("\n");

    for (int j = 0 ; j < length - SPLIT_INDEX ;j++ )
        {
            new_arr[j] = arr[i++];
            printf("%d ",new_arr[j]);
        }

        
    return 0;
}
