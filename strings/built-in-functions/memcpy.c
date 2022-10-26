/*
memcpy built-in function
*/

#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    // copy string
    char str[] = "Hello world";
    char dest[BUFSIZ];
    memcpy(dest,str,strlen(str) + 1);
    printf("dest:%s\n",dest);

    // copy int array
    int src_arr[] = {1,2,3,4,5};
    int dest_arr[5];
    memcpy(dest_arr,src_arr,sizeof(src_arr));
    for (int i = 0 ; i < 5 ; printf("%d ",dest_arr[i]),i++);

    // copy struct
    printf("\n");
    struct Car 
    {
        int model;
        double price;
        char name[BUFSIZ];
    } BMW = {2023,56000,"bmw"};

    struct Car Mercedes ; 

    memcpy(&Mercedes,&BMW,sizeof(BMW));

    printf("model:%d\n",Mercedes.model);
    printf("model:%.2lf\n",Mercedes.price);
    printf("model:%s\n",Mercedes.name);
    return 0;
}
