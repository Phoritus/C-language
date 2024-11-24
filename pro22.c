#include <stdio.h>
//sort function

void sort(char number[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(number[j]>number[j+1])//{1,3,5,6,7,9,8}
            {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
}
void printNumber(char number[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%c ",number[i]);
    }
}

int main()
{
    char number[]={'B','C','D','A'};
    int size=sizeof(number)/sizeof(number[0]);
    sort(number,size);
    printNumber(number,size);

    return 0;
}