/*
Q49: Check If A Number Is An Armstrong Number

371 is an armstrong number becuase its sum of each digist power to sums of digits is equal to the number :
3*3*3 = 27
7*7*7 = 343
1*1*1 = 1 

27 + 343 + 1 = 371

*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number to check if its armstrong or not:");
    scanf("%d",&num);
    if(is_armstrong(num)) printf("%d is armstrong number\n",num);
    else printf("%d is NOT armstrong number\n",num);

    return 0;
}
bool is_armstrong(int num)
{
int total_digits = 0;
int digits_left = num;
while ( digits_left != 0)
{
    total_digits++;
    digits_left /= 10;
}
 int digit = 0 , total = 0 , number_left = num;
 while ( number_left != 0)
 {
    digit = number_left % 10;
    total += pow(digit,total_digits);
    number_left /= 10;
 }    

 return (total == num);

}