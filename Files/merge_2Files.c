/*
Q21 : Merge 2 files in 3rd file
*/

#include <stdio.h>

#define BUFFER_SIZE 1048


int main(int argc, char const *argv[])
{
    FILE *fp1st = fopen("G:\\f1.txt","r");
    FILE *fp2nd = fopen("G:\\f2.txt","r");
    FILE *fp3rd = fopen("G:\\f3.txt","w");
    char buffer_f1[BUFFER_SIZE] , buffer_f2[BUFFER_SIZE];
    char c;
    while ((c = getc(fp1st)) != EOF)
        {
            fputc(c,fp3rd);
        }
    while ((c = getc(fp2nd)) != EOF)
        {
            fputc(c,fp3rd);
        }
    fclose(fp1st);
    fclose(fp2nd);
    fclose(fp3rd);
    return 0;
}
