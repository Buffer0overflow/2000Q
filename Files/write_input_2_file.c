/*
Q7: Write Lines Of User Input To A File
*/

#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 2048 

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE];
    bool keep_going = true;
    FILE *fp = fopen("G:\\OUTPUT.TXT","w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return -1;
    }

    while (keep_going)
    {
       fgets(buffer,BUFFER_SIZE,stdin);
     
       if (strcmp(buffer,"quit\n") == 0)
       {
        keep_going = false;
       }
       else
       {
        /*
        fputs and fprintf arguments are passed in reversed order !!
        */
        fputs(buffer,fp);
        //fprintf(fp,buffer);
       }
    }
    return 0;
}
