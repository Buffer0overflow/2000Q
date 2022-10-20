/*
Q47 : Using Recursion To Compute The Average Of An Array
*/

#include <stdio.h>

double average(double arr[],int length);

int main(int argc, char const *argv[])
{
    double arr[]={1,2,3};
    int length = 3;
    
    printf("Average of this array is:%.2f\n",average(arr,length));
    return 0;
}
double average(double arr[],int length)
{
    if ( length == 1) return arr[length - 1];
    else return (average(arr,length - 1) * (length - 1) + arr[length - 1]) / length;

}