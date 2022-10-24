/*
Q65 : Check If A Number Is Prime
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *num = malloc(sizeof(int) * 1);
    printf("Enter a number:");
    scanf("%d", num);
    int counter = 0;

    for (int i = 2; i <= (*num / 2); i++)
    {
        if (*num % i == 0)
        {
            printf("%d is not a prime number\n", *num);
            return 0;
        }
    }
    printf("%d is a prime number\n", *num);
    free(num);

    return 0;
}
