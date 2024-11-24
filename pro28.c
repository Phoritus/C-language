#include <stdio.h>

// Bitwise operators =  special operators used in bit level programming

// & = AND การคูณกัน
// | = OR การบวกกัน
// ^ = XOR // เหมือน 0 ต่าง 1
//<< = left shift |  >> = right shift

int main()
{
    int x=6; // 6 =000110
    int y=12;// 12=001100
    int z=0; // 1010=10

    z= x & y;
    printf("AND: %d\n",z);

    z= x | y;
    printf("OR: %d\n",z);

    z= x ^ y;
    printf("XOR: %d\n",z);

    z= x<<2;
    printf("shift left: %d\n",z);

    z= x>>2;
    printf("shift right: %d",z);
    return 0;
}