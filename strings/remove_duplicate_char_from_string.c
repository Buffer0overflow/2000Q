/*
Q100: Remove Duplicate Characters From A String
*/

#include <stdio.h>
#include <string.h>


void remove_duplicate(char *s);

int main(int argc, char const *argv[])
{
    char str[]="I love programming";
    remove_duplicate(str);
    printf("%s",str);
    return 0;
}
void remove_duplicate(char *s)
{
 int length = strlen(s);
 for (int i = 0 ; i < length ; i++)
    {
        for (int j = i + 1 ; j < length ;)
        {
            if (s[i] == s[j])
            {
            for (int k = j ; k < length ; k++)
            {
               s[k] = s[k +1];
            }
               length--;

            } 
            else
            j++;
            
        }
    }
}