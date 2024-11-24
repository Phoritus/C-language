#include <stdio.h>

void fuckdays(char a[],int b){
    printf("Happy fuck day %s\n",a);
    printf("You are fucking %d years old\n",b);
}

int main(){
    char name[]="Max";int age=53;
    fuckdays(name,age);
    char name2[]="Pumax";int age1=382;
    fuckdays(name2,age1);
    return 0;
}
// return in function

int area(int x,int y){
    return x*y;
}
int main(){
    int w=5;int h=6;
    double a =area(w,h);
    printf("%.1lf",a);
}