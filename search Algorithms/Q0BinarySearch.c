/*
Binary Search Algorithm
*/

#include <stdio.h>

int bin_search(int arr[],int e , int l ,int r);

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("index of element is %d\n",bin_search(arr,4,0,9));
    return 0;
}
int bin_search(int arr[],int e , int l ,int r)
{
    int mid = l + (r - l) / 2;
    
    if ( l > r) return -1;

    if (arr[mid] == e ) return mid;
    else if (arr[mid] > e)
    return bin_search(arr,e,l,mid-1);
    else bin_search(arr,e,mid+1,r);

}
