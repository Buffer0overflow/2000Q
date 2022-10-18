/*
Q32: Find The Average Of Groups Of Numbers In A File (Ref#88)
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    FILE *fp = fopen("G:\\test.txt","r");
    int group_length;
    double next_number = 0;
    int remaining_group_numbers = 0;
    double total = 0;
    
    while (!feof(fp))
    {
        if (remaining_group_numbers == 0)
        {
            fscanf(fp,"%d",&group_length);
            remaining_group_numbers = group_length;
            printf("Number of elements in this group is:%d\n",group_length);
            printf("Data in this group is:");
        }
        else
        {
            fscanf(fp,"%lf",&next_number);
            printf("%0.lf ",next_number);
            total += next_number;
            remaining_group_numbers--;
            if (remaining_group_numbers == 0)
            {
                printf("\nAvreage is:%.2lf\n",total / group_length);
                total = 0;
            }
        }
    }
    
    fclose(fp);
    return 0;
}

