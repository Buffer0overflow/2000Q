
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    struct Brand 
    {
        int productonYear;
        double price;
        char name[256];
        int colors[5];
    } Classen , Xmagic ={.price = 72.5,"Xmagic",.productonYear = 2019} , Prestige;

    
    Classen.price = 89.00;
    Classen.productonYear = 2018;
    Classen.colors[0] = 33572;
    Classen.colors[1] = 28389;
    strncpy(Classen.name ,"Sensa",255);


    Prestige = Classen;

    printf("my brand is %s produced in %d with price of %.2lf\n",Classen.name,Classen.productonYear,Classen.price);
    printf("Classen colors are %d %d\n",Classen.colors[0],Classen.colors[1]);
    printf("brand is %s\n",Xmagic.name);
    printf("brand is %s\n",Prestige.name);

    typedef struct 
    
    {
        int model;
        double price;
        char brand[256];
    } Car;
    
    Car BMW;
    strncpy(BMW.brand,"X5",255);
    BMW.model = 2023;
    BMW.price = 389000;
    printf("car name: %s\n",BMW.brand);
    printf("car name: %d\n",BMW.model);
    printf("car name: %0.2lf\n",BMW.price);



    return 0;
}
