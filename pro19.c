#include <stdio.h>
// 2D array = an array,where each element is an entire array
//            useful if nedd matrix,grid,table of data
int main()
{
    /* int numbers[2][3]={
                        {1,2,3},
                        {4,5,6}
    }; */
    int number[3][3];
    int rows=sizeof(number)/sizeof(number[0]);
    int column=sizeof(number[0])/sizeof(number[0][0]);
    printf("%d byte\n",sizeof(number[0][1])); //check byte in array
    printf("%d\n",rows);
    printf("%d\n",column);
    number[0][0]=1;
    number[0][1]=2;
    number[0][2]=3;
    number[1][0]=4;
    number[1][1]=5;
    number[1][2]=6;
    number[2][0]=7;
    number[2][1]=8;
    number[2][2]=9;
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",number[i][j]);
        }
        printf("\n");
    }
    return 0;
}