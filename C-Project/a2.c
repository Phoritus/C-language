#include <stdio.h>
#include <math.h>
int main(){
    int c;int a;int b;
    printf("Type value:");
    scanf("%d\n",&a);scanf("%d",&b);
    c=sqrt((a*a)+(b*b));
    printf("The pitagorus is:%d",c);
    return 0;
}