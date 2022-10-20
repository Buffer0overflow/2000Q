/*
Q44: Create A Multiplication Table
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter positive numnber to create multiplicaton for:");
    scanf("%d", &n);

    printf("%5s", "x");
    for (int i = 1; i <= n; i++)
        printf("%5d", i);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%5d", i);
        for (int j = 1; j <= n; j++)
            printf("%5d", i * j);

    printf("\n");
    }
    return 0;
}
