/*
Q26: How To "Return" More Than One Value From A Function
*/


#include <stdio.h>

void currency(double sar,double kwd,double *SAR ,double *KWD);


int main(int argc, char const *argv[])
{
    double sar = 0;
    double kwd = 0;
    currency(10,10,&sar,&kwd);
    printf("10 SAR is:%.2lf USD\n"
            "10 KWD is:%0.2lf USD\n",sar,kwd);
    return 0;
}
void currency(double sar,double kwd,double *SAR ,double *KWD)
{
    *SAR = sar / 3.75;
    *KWD = kwd / 0.31;
}