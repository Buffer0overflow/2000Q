/*
Q90 : Random Password Generator
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <process.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int length;
    char *password = malloc(sizeof(char) * (length + 1));
    char puncts[] = "!@#$^*()_+~<>?;:'";
    size_t puncts_len = strlen(puncts);
    char digits[] = "0123456789";
    size_t digits_len = strlen(digits);
    char capital[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t capital_len = strlen(capital);

    srand(time(NULL) * _getpid());

    printf("Enter length of the password:");
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        int char_type = rand() % 3;
        if (char_type == 0)
            password[i] = digits[rand() % digits_len];
        else if (char_type == 1)
            password[i] = puncts[rand() % puncts_len];
        else
            password[i] = capital[rand() % capital_len];
    }
    password[length] = '\0';

    printf("Password : %s\n",password);
    free(password);
    return 0;
}
