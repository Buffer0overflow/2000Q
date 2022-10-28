/*
Q79 : Read CSV File Data Into An Array Of Structs
*/

#include <stdio.h>
#include <errno.h>
#include <string.h>

typedef struct
{
    char type;
    char name[BUFSIZ];
    int age;
    double average;
} Student;

int main(int argc, char const *argv[])
{

    FILE *fp = fopen("G:\\123.txt", "r");
    if (NULL == fp)
       return -1;

    Student student[100];
    int records = 0;
    int read = 0;

    do
    {
        read = fscanf(fp, "%c,%49[^,],%d,%lf\n", 
                      &student[records].type,
                      student[records].name,
                      &student[records].age,
                      &student[records].average);

        if (read == 4)
            records++;
        if (read != 4 && !feof(fp))
        {
            printf("File format is incorrect\n");
            return -1;
        }

        if (ferror(fp))
        {
            printf("Error reading file %d\n", errno);
            printf("%s\n", strerror(errno));
            return -2;
        }
    } while (!feof(fp));

    fclose(fp);

    printf("%-13s %-25s %-8s %-8s","type","Name","Age","Average\n");
    for (int i = 0; i < records; i++)
    {
        printf("%-13c %-25s %-8d %-8.2lf",
               student[i].type,
               student[i].name,
               student[i].age,
               student[i].average);

        printf("\n");
    }

    return 0;
}
