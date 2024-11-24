#include <stdio.h>
int main(){
    int a;
    printf("Enter you score:");
    scanf("%d",&a);
    if (a>=80)
    {
        printf("You got grade A\n");
    }
    else if (a>=70)
    {
        printf("You got grade B\n");
    }
    else if (a>=60)
    {
        printf("You got grade C\n");
    }
    else if (a>=50)
    {
        printf("You got grade D\n");
    }
    else if (a<50)
    {
        printf("You fuck up!");
    }   
    
    
        
    return 0;
}