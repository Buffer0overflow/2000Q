#include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

 int main(void) {
 
int arr[] = {1,2,3,4};
int *ptr = arr;

printf("size of array is:%zu\n",sizeof(ptr)); // size of pointer NOT array
printf("size of array is:%zu\n",sizeof(arr)); // size of array itself

 }