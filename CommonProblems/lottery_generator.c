/*
Q13: Lottery Number Generator
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    srand(time(0));
    int arr[6];
    bool unique;

    for (int i = 0 ; i < 6 ; i++)
    {
        int random;
        unique = true;
       do
       {
        random = (rand() % 59) + 1;
        for (int j = 0 ; j < i ; j++)
        {
            if (random == arr[j])
              unique = false;
        }
       } while (!unique);
       
        arr[i] = random; 
        printf("%d ",arr[i]);
    }   

    
    return 0;
}
