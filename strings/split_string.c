/*
Q:62 Split Strings Function
*/

#include <stdio.h>
#include <string.h>

void split_string(char *s);

int main(int argc, char const *argv[])
{
    char str[]="I like programming more than Pepsi";
    split_string(str);
    return 0;
}
void split_string(char *s)
{
    char delimiter[]=" ,.-\n\t;";
    char *string = strtok(s,delimiter);
    int number_of_words = 0;
    while (string != NULL)
    {
        printf("%s\n",string);
        string = strtok(NULL,delimiter);
        number_of_words++;
    } 
    printf("Number of words in the string is %d\n",number_of_words);
}