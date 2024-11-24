#include <stdio.h>
//while loop = checks a condition,then executes a block of code if condition is true
//do while loop = always executes a block of code once,then checks a condition

int main()
{
    int number=0;int i=0;
    int sum=0;double avg=0;
    do{
        printf("Enter your value:");
        scanf("%d",&number);
        if(number>0)
        {   
            sum+=number;
            i++;
        }
    }while(number>0);
    
    printf("sum is:%d\n",sum);
    avg=sum/i;
    printf("Average is:%.2lf",avg);

}