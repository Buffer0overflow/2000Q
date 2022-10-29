/*
Q80: Remove Trailing Newline Character From fgets() Input
*/

#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char buffer[BUFSIZ];
    printf("Enter your Full name:");
    fgets(buffer,BUFSIZ,stdin);
    printf("%s",buffer);
    size_t len = strlen(buffer);
    buffer[len - 1]='\0';
    printf("String length is:%d",strlen(buffer));
    return 0;
}
