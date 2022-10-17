/*
Q24: Rock Paper Scissors Game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum Play
{
    ROCK,
    PAPER,
    CEZAR
} game;

game shuffle();

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        if (shuffle() == ROCK)
            printf("Rock!\n");
        else if (shuffle() == PAPER)
            printf("Paper\n");
        else
            printf("Cezar!!\n");
    }
    return 0;
}
game shuffle()
{
    if (rand() % 3 == 0)
        return ROCK;
    else if (rand() % 3 == 1)
        return PAPER;
    else
        return CEZAR;
}