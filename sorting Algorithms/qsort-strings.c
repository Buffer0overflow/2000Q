/*
Q18: Using qsort() To Sort An Array of strings.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *x,const void *y)
{
    return  strcmp(x,y);
}

int main(int argc, char const *argv[])
{
    char s[][11]={"hello","ali","Programmer"};
    int size = sizeof(s) / sizeof(s[0]);
    printf("size of s[0] is %d\n",sizeof(s));
    qsort(s,size,11,compare);
    for (int i = 0 ; i < size ; i++)
    {
        printf("%s ",s[i]);
    }
    return 0;
}
