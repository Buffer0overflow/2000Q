/*
Q36: ODD OR EVEN
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    number % 2 == 0 ? printf("number is even\n") : printf("number is odd\n");
    return 0;
}
