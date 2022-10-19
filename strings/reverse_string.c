/*
Q37 : Reverse a string
*/

#include <stdio.h>
#include <string.h>

void reverse_string(char *s);

int main(int argc, char const *argv[])
{
    char str[]="how are you?";
    reverse_string(str);
    printf("%s",str);
    return 0;
}
void reverse_string(char *s)
{
    int length = strlen(s);
    int middle = length /2;
    char temp;
    for (int i = 0 ; i < middle ; i++)
    {
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }

}