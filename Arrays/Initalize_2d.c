/*
Q48: Initialize A 2D Array With User Input
*/

#include <stdio.h>

#define rows 3
#define cols 4

int main(int argc, char const *argv[])
{
    int arr[rows][cols];
    for (int i = 0 ; i < rows ; i++)
    {
        for (int j = 0 ; j < cols ; j++)
        {
            printf("Enter a number:");
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0 ; i < rows ; i++)
       {
        for(int j = 0 ; j < cols ; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
       }

    return 0;
}
