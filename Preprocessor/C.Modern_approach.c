
#include <stdio.h>

#define BUFFER_SIZE 25

/*
To see preprocessor stage , we run below command to get output file before compilation - > object code ;
gcc - E -o SOURCE.C OUTPUT_FILE_NAME 
*/

int main(int argc, char const *argv[])
{
    char name[BUFFER_SIZE];
    printf("%s",__func__);
    return 0;
}
