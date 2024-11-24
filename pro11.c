#include <stdio.h>
// ternary ooerator = shortcut to if/else when assingnging/returning a value
// (condition) ? value if true : value if false

int findmax(int x,int y){
    return(x>y)? x:y;    
}
int main(){
    int a=3;int b=6;
    int x=findmax(a,b);
    printf("%d",x);
    return 0;
}

//function prototype
void mek(char[],int);//function prototype
int main(){
    
    char name[]="Max";int age=31;
    mek(name,age);
    return 0;
    
}
void mek(char x[],int y)
{
    printf("Your fucking name is:%s\n",x);
    printf("Your age is %d",y);
}
