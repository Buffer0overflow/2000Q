/*
Q106: Find The Two Array Elements Whose Sum Is Closest To Zero
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[]= {-53,-42,10,-21,8,33,92,111,-133,-2};
    int length = 10;
    int min_sum;
    int indexA;
    int indexB;

    min_sum = arr[0] + arr[1];
    indexA = 0;
    indexB = 1;
    int i , j;
    for (i = 0 ; i < (length - 1) ; i++)
    {
        for (j = i + 1 ; j < length ; j++)
        {
            int new_sum = arr[i] + arr[j];
            if (abs(new_sum) < abs(min_sum))
               {
                 min_sum = new_sum ; 
                 indexA = i;
                 indexB = j;
               }

        }
    }
    printf("Min sum is:%d\n",min_sum);
    printf("Value 1: %d Occurs at index %d \n",arr[indexA],indexA);
    printf("Value 2: %d Occurs at index %d \n",arr[indexB],indexB);

    return 0;
}
