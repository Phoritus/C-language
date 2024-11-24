#include <stdio.h>
#include <string.h>

//array of string
int main()
{
    char car[][7]={"Rambo","Mazda","Ferrari"};//array of string
    strcpy(car[0],"BMW");
    for(int i=0;i<sizeof(car)/sizeof(car[0]);i++)
    {
        printf("%s\n",car[i]);
    }
    return 0;
}