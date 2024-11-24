#include <stdio.h>
#include <string.h>
int main(){
    char name[25];
    int age;
    printf("What your name?\n");
    //scanf("%s",&name);
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

    printf("How old are you\n");
    scanf("%d",&age);

    printf("Your are %d year old\n",age);
    printf("Hello %s,fuck you ",name);
    return 0;
}