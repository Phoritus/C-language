#include <stdio.h>
#include <string.h>
//while loop
int main()
{
    char name[25];
    printf("\nEnter your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    
    while(strlen(name)==0)
    {
        printf("What the hell are you doing!??\n");
        printf("Enter your name: ");
        fgets(name,25,stdin);
        name[strlen(name)-1]='\0';

    }
    printf("Fuck you: %s",name);
    return 0;
}
