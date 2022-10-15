/*
Q17: Using qsort() To Sort An Array
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *x,const void *y)
{
    int x1 = *(int*)x;
    int y1 = *(int*)y;
    return y1 - x1;


}

int main(int argc, char const *argv[])
{
    int arr[]={1,5,3,6,4};
    int length = 5;

    qsort(arr,length,sizeof(int),compare);

    for (int i = 0 ; i < length ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
