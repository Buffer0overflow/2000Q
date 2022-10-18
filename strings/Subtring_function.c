/*
Q33: How To Create A Substring Function
*/

#include <stdio.h>
#include <string.h>

void substring(const char *s,char *substring ,int index,int length);

int main(int argc, char const *argv[])
{
    char ISBN[]="440-100-BN-2345-SA";
    char supplier_id[48];
    substring(ISBN,supplier_id,11,4);

    printf("Supplier ID:%s\n",supplier_id);
    return 0;
}
void substring(const char *s,char *substring ,int index,int length)
{
    if (index >= strlen(s))
    {
        substring[0] ='\0';
        return ;
    }
   int i = 0;
   while ( i < length && s[index + i] != '\0')
   {
    substring[i] = s[index + i];
    i++;
   } 
   substring[length] = '\0';
   
}