/*
Q42: How To Generate Random Double / unsigned int Numbers in min-max range
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
double min_max_random(double min,double max);

int main(int argc, char const *argv[])
{
    srand(time(0));
    for (int i = 0 ; i < 20 ; i++)
        printf("%0.2lf \n",min_max_random(3,9));
    return 0;
}
double min_max_random(double min,double max)
{
    double random = ((double) rand()) / RAND_MAX;
    double range = random * (max - min);
    double number = min + range;
    return number;
}
*/

unsigned min_max_random(int min, int max);

int main(int argc, char const *argv[])
{
    srand(time(0));
    for (int i = 0; i < 20; i++)
        printf("%u ", min_max_random(30, 100));
    return 0;
}
unsigned min_max_random(int min, int max)
{
    unsigned number, random;
    do
    {
        random = rand() % 100 + 1;
        if ((random + min) < max)
        {
            number = random + min;
        }
    } while ((random + min) > max);
    if ( number != 0)
        return number;
    else if (number == 0)
      return number + min;
}
