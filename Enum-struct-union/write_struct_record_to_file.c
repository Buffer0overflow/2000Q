/*
Q81: Write An Array Of Structs To A CSV File
*/

#include <stdio.h>

typedef struct 
{
    char type;
    char name[BUFSIZ];
    int age;
    double average;
}Student;  

int main(int argc, char const *argv[])
{
        FILE *fp = fopen("G:\\students.csv","w");
        if (NULL == fp) return -1;
        Student stud[10];
        int j = 0;
        int initial_age = 20;
        double initial_average = 4.5;

    for (int i = 0 ; i < 10 ; i++ , j++)
    {
        if ( j % 2 == 0)
            stud[i].type = 'C';
        else
            stud[i].type = 'U';

        snprintf(stud[i].name ,50,"stud%d",i);
        stud[i].age = initial_age++;
        stud[i].average = initial_average++;
    }

    for (int i = 0 ; i < 10 ; i++)
       {
        fprintf(fp,"%c %s %d %0.2lf\n",
                    stud[i].type,
                    stud[i].name,
                    stud[i].age,
                    stud[i].average);
       }
    return 0;
}

