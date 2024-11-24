#include <stdio.h>
//การเพิ่มค่าใน array โดยไม่ต้องแก้โค้ดเงื่อนไขใน for loop
//คำสั่ง sizeof ใช้ในการดูขนาดของ array ในรูปแบบ bytes 
int main()
{
    double prices[]={5,10,15,20,25,30};
    printf("%d",sizeof(prices));//แต่ละตัวใน array prices มี 8 bytes

    for(int i=0;i<sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("$%.2lf\n",prices[i]);
    }

    return 0;
}