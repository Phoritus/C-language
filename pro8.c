#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two condition are true
    
    float temp=25;
    bool sunny=1;
    if(temp >=0 && temp <=30 && sunny){
        printf("The weather is fucking good!");
    }
    else{
        printf("All of this weather is fucking toxicine");
    }
    return 0;
}

int main(){

    // logical operator = || (OR) checks if at least one condition is true

    float temp=25;
    if(temp<=0 || temp >=30){
        printf("The weather is fucking toxicine");
    }
    else{
        printf("The weather is fucking good!!🤣");
    }
}

int main(){

    // logical operators = ! (NOT) reverses the state of a condition

    bool toxic=true;
    if(!toxic){
        printf("The weather is fucking good!!🤣");
    }
    else{
        printf("The weather is can make you die!!🔥");
    }
    return 0;
    
}