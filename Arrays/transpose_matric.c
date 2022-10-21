/*
Q50: Find The Transpose Of A Matrix
*/

#include <stdio.h>

#define rows 2
#define cols 3

/*
        i + j      i + j
1,4 arr[0][0] + arr[1][0]
2,5 arr[0][1] + arr[1][1]
3,6 arr[0][2] + arr[1][2]

*/

int main(int argc, char const *argv[])
{
    int arr[rows][cols] = {{1,2,3},
                           {4,5,6}};
    int transpose_array[cols][rows];

    for (int i = 0 ; i < cols ; i++)
        for (int j = 0 ; j < rows ; j++)
        {
            transpose_array[i][j] = arr[j][i];
        }

    for (int i = 0 ; i < cols ; i++)
        {
            for (int j  = 0 ; j < rows ; j++)
                 printf("%d ",arr[j][i]);
            printf("\n");
        }
    return 0;
}
