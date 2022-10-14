/*
Q3: Fizz Buzz Problem
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1 ; i <= 17 ;i++ )
    {
        if (i % 3 == 0 && i % 5 == 0) printf("[%d] : FizzBuzz\n",i);
        else if ( i % 5 == 0) printf("[%d] : Buzz\n",i);
        else if (i % 3 == 0) printf("[%d] : Fizz\n",i);
        else printf("%d\n",i);
    }
    return 0;
}
