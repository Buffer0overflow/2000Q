/*
Q:67 How To Safely Handle realloc() Failure
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int *arr = malloc(sizeof(int) * 3);

    arr[0] = 15;
    arr[1] = 250;
    arr[2] = 499;
    printf("Array address before:%p\n",arr);
    int *temp;

    temp = realloc(arr,sizeof(int) * 4000);
    if ( temp != NULL) arr = temp;
    else
    {
        printf("Array address after :%p\n",arr);
    }
        temp[3] = 555;
    printf("%d",arr[3]);
    
    free(arr);

    return 0;
}
