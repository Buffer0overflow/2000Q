/*
Q59: Share A Global Variable Across Multiple Files By Using extern
*/

#include <stdio.h>
#include "library.h"


int main(int argc, char const *argv[])
{
    print();
    add_one();
    print();
    number +=10;
    printf("%d");
    return 0;
}
