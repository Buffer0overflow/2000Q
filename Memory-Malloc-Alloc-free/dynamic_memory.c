#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
     int *int1 = malloc(3 * sizeof(int));
     int *int2 = malloc(4 * sizeof(int));
    int k = 70 , x = 50;
    for (int i = 0 ; i < 3 ; i++ , k++) int1[i] = k ;
    for (int i = 0 ; i < 3 ; i++ , x++) int2[i] = x ;
    
    int *back_int1 = int1;
    int1 = realloc(int1,10);

    printf("    address of buffer1 is:%p\n",int1);
    //printf("address of buffer2 is:%p\n",int2);
    printf("address of back_buffer is:%p\n",back_int1);

    printf("buffer1 content is:%d\n",int1[0]);
    printf("back_buffer content is:%d\n",back_int1[0]);
    free(int1);
    free(int2);

    
    
    return 0;
}