#include <stdio.h>
int main(){
    int age;
    printf("\nEnter your age:");
    scanf("%d",&age);
    if (age>=18){
        printf("You can go sex!");
    }
    else if (age==0)
    {
        printf("You fuck up!");
    }
    else if (age<0)
    {
        printf("Are you fucking kinding");
    }
    else{
        printf("Go to hell!");
    }
    
    return 0;
}