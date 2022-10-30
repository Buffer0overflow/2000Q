/*
Q96:Round A Double To A Specific Number Of Decimal Places
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num = 9.3;

    printf("Ceil :%0.2lf\n",ceil(num));
    printf("floor :%0.2lf\n",floor(num));


    printf("Round :%0.2lf\n",round(num));
    return 0;
}
