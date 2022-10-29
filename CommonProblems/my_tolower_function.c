/*
Q83: Create Your Own tolower() Function
*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
    char c ;
    printf("Enter a capital letter char to get lower case letter:");
    scanf("%c",&c);
    if ( c >= 'A' && c <= 'Z')
     
        printf("Capital letter is %c\n",c + 32);
    else
        printf("Capital letter is %c\n",c);
    
    return 0;
}
