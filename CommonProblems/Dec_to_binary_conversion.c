/*
Q61: Convert Decimal Number To Binary Number
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[64];
    int number;
    int i = 0;

   do
   {
     printf("Enter a positive number:");
     scanf("%d",&number);
   } while (number < 0);
   
   do
   {
    if (number % 2 == 0)
        {
            arr[i] = 0;
        }
    else 
        {
            arr[i] = 1;
        }
     number /= 2;
     i++;
   } while (number != 0);
   
   
   for (int j = i - 1 ; j >= 0 ; j--)
        printf("%d",arr[j]);
  
    return 0;
}