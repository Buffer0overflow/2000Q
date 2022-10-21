/*
Q55: Delete All Array Elements That Match A User Input Value
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100] = {1, 2, 3, 3, 4, 5, 33, 3, 5, 3, 3};
    int size = 11;
    int num;

    printf("Enter the number you want to delete:");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for (int i = 0; i < (size - 1);)
    {
        if (arr[i] == num)
        {
            if (i < (size - 1))
            {
                for (int j = 0; j < size - 1; j++)
                    arr[i] = arr[j + 1];
                size--;
            }
        }
        else
            i++;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}
