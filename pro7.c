#include <stdio.h>
int main(){
char grade;
printf("\nEnter a letter grade:");
scanf("%c",&grade);
switch (grade)
{
case 'A':
    printf("Great job!\n");
    break;
case 'B':
    printf("It's okay!\n");
    break;
case 'C':
    printf("You must to practice more bro~~~!");
    break;
case 'D':
    printf("Just retired!\n");
    break;
case 'F':
    printf("You fucked up!\n");
    break;

default:
    printf("What the hell are you doing");
    break;
}
return 0;
}