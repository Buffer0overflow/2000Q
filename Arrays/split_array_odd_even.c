/*
Q39: Split Even And Odd Values Of An Array Into Two Arrays
*/

#include <stdio.h>

void split_nums(int arr[], int length, const int even, const int odd);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = 10;
    int odd = 0, even = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("No. of Even elements:%d\n", even);
    printf("No. of Odd elements :%d\n", odd);

    split_nums(arr, length, even, odd);

    return 0;
}

void split_nums(int arr[], int length, const int even, const int odd)
{
    int evenArray[even];
    int oddArray[odd];
    int j = 0, k = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
            evenArray[j++] = arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 1)
            oddArray[k++] = arr[i];
    }
    printf("Even arrays elements are :");

    for (int i = 0; i < even; i++)
        printf("%d ", evenArray[i]);

    printf("\n");

    printf("Odd arrays elements are  :");

    for (int i = 0; i < odd; i++)
        printf("%d ", oddArray[i]);
}
