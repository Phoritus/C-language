#include <stdio.h>

int test()
{
    //for loop = repeats a section of code a limited amount of times

    for(int i=10;i>=1;i-=2) //1.กำหนดเริ่มต้น 2.กำหนดเงื่อนไข 3.กำหนดการเพิ่มหรือลด
    {
        printf("%d\n",i);
    }
    
}
// continue = skips rest of code & forces the next iteration of the loop
// break = exits a loop/switch

int main()
{
    for(int i=1;i<=20;i++)
    {
        if(i==13)
        {
            continue;
        }
        printf("%d ",i);
        
    }
    printf("\n");
    for(int i=1;i<=20;i++)
    {
        if(i==13)
        {
            break;
        }
        printf("%d ",i);
    }
    return 0;
}