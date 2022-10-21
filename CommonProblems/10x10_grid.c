/*
Q51 : Print Numbers From 01-100 In A 10x10 Grid
*/ 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 100)
    {
        printf("%02d ",i);
        if(i % 10 == 0) printf("\n");
        i++;
    }
    return 0;
}
