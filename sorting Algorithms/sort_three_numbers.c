/*
Q31: Sort Three Numbers
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &n1, &n2, &n3);
    int lowest, middle, highest;

    if ((n1 <= n2) && (n1 <= n3))
    {
        lowest = n1;
        if (n2 <= n3)
        {
            middle = n2;
            highest = n3;
        }
        else
        {
            middle = n3;
            highest = n2;
        }
    }
    else if ((n2 <= n3) && (n2 <= n1))
    {
        lowest = n2;
        if (n1 < n3)
        {
            middle = n1;
            highest = n3;
        }
        else
        {
            middle = n3;
            highest = n1;
        }
    }
    else
    {
        lowest = n3;
        if ( n1 < n2)
        {
            middle = n1;
            highest = n2; 
        }
        else
        {
            middle = n2;
            highest = n1;
        }
    }

    printf("Asce order is: %d %d %d\n", lowest, middle, highest);
    printf("Desc order is: %d %d %d\n", highest, middle, lowest);

    return 0;
}
