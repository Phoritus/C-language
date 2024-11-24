#include <stdio.h>
#include <string.h>
//swap value of two strings

int main()
{
    char x='X';
    char y='Y';
    char temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%c\n",x);
    printf("y=%c\n",y);

    char a[100]="PuMax";
    char b[100]="Ben";
    char c[100];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("a= %s\n",a);
    printf("b= %s\n",b);
    return 0;
}