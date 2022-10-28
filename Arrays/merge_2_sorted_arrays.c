/*
Q75: Merge Two Sorted Arrays // from sanfoundry.com
*/

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 7, 8};
    int arr3[10];
    for (int k = 0; k < 10; k++)
    {
        if (i < 5 && j < 5)
        {
            if (arr1[i] < arr2[j])
                arr3[k] = arr1[i++];
            else
                arr3[k] = arr2[j++];
        }

        else if (i < 5)
            arr3[k] = arr1[i++];
        else
            arr3[k] = arr2[j++];
    }
    printf("The merged array is: \n");

    for (int k = 0; k < 10; k++)
        printf("%d ", arr3[k]);
    printf("\n");

    return 0;
}