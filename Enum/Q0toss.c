/*
Coin Toss Simulator
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef enum coin {HEADS,TAILS} coin;

coin flipCoin();

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    for (int i = 0 ; i < 10 ; i++)
    {
        if (flipCoin() == HEADS) printf("HEADS\n");
        else printf("TAILS\n");
    }

    return 0;
}

coin flipCoin()
{
     if (rand() % 2 == 0 ) return HEADS;
     else return TAILS;
}