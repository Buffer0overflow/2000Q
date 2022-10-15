/*
Q19 : Copy A File
*/

#include <stdio.h>

void copyFile(const char *s , const char *d);

int main(int argc, char const *argv[])
{
    if (3 != argc)
    {
        printf("Usage : Sourcefile path | destination path\n");
    }

    
    copyFile(argv[1],argv[2]);
    return 0;
}
void copyFile(const char *s , const char *d)
{
    FILE *fpSrc = fopen(s,"r");
    FILE *fpDest = fopen(d,"w");
    char Srcbuffer[2048];
    char Destbuffer[2048];

    while(fgets(Srcbuffer,2048,fpSrc))
    {
        fprintf(fpDest,Srcbuffer);
    }
    fclose(fpDest);
    fclose(fpSrc);

}
