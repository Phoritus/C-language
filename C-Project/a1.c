#include <stdio.h>
#include <math.h>
int main(){
    const double pi=3.14159;
    double circleciround;
    int radius;
    double area;
    printf("\nEnter radius:");
    scanf("%d",&radius);
    circleciround = 2*pi*radius;
    area=pi*radius*radius;
    printf("circleciround is %.2lf\n",circleciround);
    printf("area is %.2lf",area);
    return 0;
}