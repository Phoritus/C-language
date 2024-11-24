#include <stdio.h>
// enum = a user defined type of named integer identifiers
//        make programe more readable

enum Days{Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};
int  main()
{
    //printf("Day:%d",Sun); //enums are NOT STRIngs,but can be as int
    enum Days today=Mon;
    if(today==Sun || today==Sat)
    {
        printf("Let's fucking diddy party!!");
    }
    else
    {
        printf("Just accept true~~");
    }
    
    return 0;
}