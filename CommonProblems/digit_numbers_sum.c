/*
Q28 : Sum The Digits Of A Number
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int number,sum = 0 , last_digit;
    printf("Enter a positve number:");
    scanf("%d",&number);

    while ( number != 0)
    {
        last_digit = number % 10;
        sum += last_digit;
        number /= 10;
    }

    printf("Sum:%d\n",sum);

    return 0;
}
