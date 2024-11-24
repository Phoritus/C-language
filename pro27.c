#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// pseudo random nubmers = A set of value that random

int main()
{
    srand(time(0));

    int number1=(rand() % 20) + 1;
    int number2=(rand() % 20) + 1;
    int number3=(rand() % 20) + 1;
    int number[]={number1,number2,number3};
    for(int i=0;i<3;i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;
}
