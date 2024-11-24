#include <stdio.h>

//array = a data structure that can store many values of the same data type.

int main()
{
    double prices[6]={5,10,20,30,40};
    prices[5]=25;prices[6]=15;//add value in array
    for(int i=0;i<=6;i++)
    {
        printf("$%.2lf\n",prices[i]);
    
    }
    return 0;
}