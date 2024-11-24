#include <stdio.h>

//typedef = reserved keyword that gives an existing datatype a "nickname"

typedef struct
{
    char name[20];
    char subject[20];
    int score;
}Student;

int main()
{
    Student user1= {"Max","Com",10};
    Student user2= {"Ohm","Circuit",30};

    printf("name:%s\n",user1.name);
    printf("subject:%s\n",user1.subject);
    printf("Score:%d\n",user1.score);
    printf("\n");
    printf("name:%s\n",user2.name);
    printf("subject:%s\n",user2.subject);
    printf("Score:%d",user2.score);
    return 0;
}