/*
Q46: Reverse An Integer Number
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n,length;
    printf("Enter a number to reverse:");
    scanf("%d",&n);
    length = snprintf(NULL, 0, "%d", n); //Get No of actual charcters printed 
    char *str = malloc(length + 1); // string buffer
    char *str_reverse = malloc(length + 1); // revesred string buffer
    snprintf(str,length + 1,"%d",n); // store the number is str string buffer
    for (int i = 0 ; i < length + 1 ; i++)
    {
        str_reverse[length - i - 1] = str[i];
    }
    int reveresed_number = atoi(str_reverse);
    printf("%d",reveresed_number);
    return 0;
}






