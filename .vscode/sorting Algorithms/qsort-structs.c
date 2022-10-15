/*
Q18: Using qsort() To Sort a struct
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[25];
    double mark;
}Student_t;

int compare(const void *x,const void *y)
{
    const Student_t *x1 = x;
    const Student_t *y1 = y;
    return x1->mark - y1->mark;

}

int main(int argc, char const *argv[])
{
    Student_t records[] = 
    {
        {12001,"Mohammed",4.96},
        {12002,"Ali",4.99},
        {12003,"Leen",4.98},
        {12004,"Hawraa",4.97}
    };

    int size = sizeof(records) / sizeof(Student_t);
    qsort(records,size,sizeof(Student_t),compare);

    for (int i = 0 ; i < size ; i++)
    {
        printf("Student ID:%d Student Name:%-8s Student Mark:%.2lf\n"
                         ,records[i].id,records[i].name,records[i].mark);
    }
    return 0;
}
