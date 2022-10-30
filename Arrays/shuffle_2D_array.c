/*
Q95 : Shuffle A 2D Array 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>

#define ROWS 3
#define COLS 6

int main(int argc, char const *argv[])
{
    int arr[ROWS][COLS] = {
                    {50,60,70,81,898,18},
                    {547,12,99,63,64,82},
                    {55,18,66,77,88,903}};
    srand( time(NULL) * getpid());
    int j,temp, swap_index , array_index;
    for (int i = 0 ; i < ROWS ; i++ ,j++)
    {
        swap_index = rand() % COLS ;
        array_index = rand() % ROWS;

        temp = arr[i][j];
        arr[i][j] = arr[array_index][swap_index];
        arr[array_index][swap_index] = temp;    

    }
    for (int i = 0 ; i < ROWS ; i++)
        {
            for ( int j = 0 ; j < COLS ; j++)
           {
            printf("%d ",arr[i][j]);
           }
           printf("\n");
        }
      
    return 0;
}
