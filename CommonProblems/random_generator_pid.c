/*
Q64: A Better Seed For Random Number Generation Than The Current Time
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <process.h>


int main(int argc, char const *argv[])
{
    srand( time(NULL) * getpid() << 8); // use getpid wih time(NULL) for better seed
    int rand_val = rand();
    printf("%d\n",rand_val);
  
    return 0;
}
