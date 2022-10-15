/*
Q16: Append Text To A File
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    char buffer[1048];
    FILE *fp = fopen("G:\\test.txt","a");
    if (NULL == fp) printf("Error opening file\n");
    printf("Enter your dream job:");
    fgets(buffer,1048,stdin);
    fputs(buffer,fp);
    fclose(fp);

    return 0;
}
