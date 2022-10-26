/*
Q68: Find And Print The Smallest Word In A String
*/

#include <stdio.h>
#include <string.h>

void find_smallest(char *s);

int main(int argc, char const *argv[])
{
    char str[] = " In the way out";
    find_smallest(str);
    return 0;
}

void find_smallest(char *s) 
{
 int length = strlen(s);
 char delimiter[]= " ,;:\t\n-./\\";
 size_t min = 65535;
 char smallest[BUFSIZ];

 char *string = strtok(s,delimiter);
 if ( string == NULL) 
 {
    printf("Empty string");
    min = 0;
    return ;
 }
 while (string)
 {
    if (strlen(string) < min)
    {
        min = strlen(string);
        strcpy(smallest,string);
    }
    string = strtok(NULL,delimiter);
 }  

    printf("Smallest word is:[%s] || No of char is:[%d]\n",smallest,min);

}