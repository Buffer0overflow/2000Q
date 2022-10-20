/*
Q45: Reverse An Integer Number
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n , remainder = 0,reverse = 0;
    printf("Enter a number to reverse:");
    scanf("%d",&n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10;
        reverse += remainder;
        n /= 10;
    }
    printf("reversed number is:%d\n",reverse);
    return 0;
}






