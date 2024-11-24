#include <stdio.h>
int main(){
    // %c = character
    // %s = string(array of characters)
    // %f = float
    // %lf= double
    // %d = integer

    // %.1 =ตำแหน่งทศนิยมที่อยากให้แสดง
    // %1 =minimum field width
    // %- = left align
    float item1 =6.61;
    float item2=38.13;
    float item3=13.53;
    printf("item1: $%8.2f\n",item1);
    printf("item2: $%8.2f\n",item2);
    printf("item3: $%8.2f\n",item3);
}