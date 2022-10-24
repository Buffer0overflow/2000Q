/*
Q66 : Print A Heart 
*/

#include <stdio.h>



int main(int argc, char const *argv[])
{
    int height = 0;
    printf("Enter height of the heart:");
    scanf("%d",&height);
    printf("\n");

    for (int i = height/2 ; i <= height ; i += 2)
    {
        for (int j = 1 ; j < height - i ; j += 2) printf(" ");
        for (int j = 1 ; j <= i ; j++) printf("*");
        for (int j = 1 ; j <= height - i ; j++) printf(" ");
        for (int j = 1 ; j <= i ; j++) printf("*");
        printf("\n");
    }

    for (int i = height ; i >= 1 ; i--)
    {
        for (int j = i ; j < height ; j++) printf(" ");
        for (int j = 0 ; j <= (i * 2) -1 ; j++ ) printf("*");

        printf("\n");
    }

    return 0;
}
