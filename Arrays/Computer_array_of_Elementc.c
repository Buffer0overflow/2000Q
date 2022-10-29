/*
Q89 : Compute The Product Of All Array Elements
*/

#include <stdio.h>

int multiply(int arr[],int n);

int main(int argc, char const *argv[])
{
    
    int arr[] = {1,2,3,4};
    int total = multiply(arr,4);
    printf("Total:%d\n",total);
    return 0;
}
int multiply(int arr[], int n)
{
    // Termination condition
    if (n <= 0)
        return 0;
    else if ( n == 1)
        return arr[0];
    else
        return (arr[n - 1] * multiply(arr, n - 1));
}