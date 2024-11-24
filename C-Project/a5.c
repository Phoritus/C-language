#include <stdio.h>

int main(){
    double value1;double value2;
    double result;char operator;
    printf("\nEnter value1:");scanf("%lf",&value1);
    printf("Enter value2:");scanf("%lf",&value2);
    printf("Enter operator:");scanf(" %c",&operator);
    

    switch(operator){
        case '+':
            result=value1+value2;
            printf("result:%.1lf",result);
            break;
        case '-':
            result=value1-value2;
            printf("result:%.1lf",result);
            break;
        case '*':
            result=value1*value2;
            printf("result:%.1lf",result);
            break;
        case '/':
            if(value2==0){
                printf("invalid value2");          
            }
            else{
                result=value1/value2;
                printf("result:%.1lf",result);
            }
            break;  
            
        default:
            printf("What the hell are you typed!??");
    }

    return 0;
}