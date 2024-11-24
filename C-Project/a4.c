#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    float temp;
    printf("\nIs the temp in (F) or (C)?:");
    scanf("%c",&a);
    a=toupper(a);

    if (a=='F'){
        printf("\nEnter temp in Farenheit:");
        scanf("%f",&temp);
        temp=((temp-32)*5)/9;
        printf("The temperature in celcius is:%.2f",temp);
    }
    else if(a=='C'){
        printf("\nEnter temp in celcius:");
        scanf("%f",&temp);
        temp=(temp*9/5)+32;
        printf("The temperature in Farenheit is:%.2f",temp);

    }
    return 0;
}