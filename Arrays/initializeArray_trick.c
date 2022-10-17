/*
Q25: Coding Trick To Initialize An Array With Include Directive And External File
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int arr[] = { 
        #include "G:\\test.txt" 
        };

       for (int i = 0 ; i < 5 ; i++)
        printf("%d ",arr[i]);
   
    return 0;
}
