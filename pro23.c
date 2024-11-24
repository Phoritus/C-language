#include <stdio.h>
#include <string.h>

// struct = collection of related members ("variables")
//          they can be different data types
//          listed under one name in block of memory
struct Player
{
    char name[20];
    int  health;
};
int main()
{   
    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Max");
    player1.health=30;

    strcpy(player2.name,"PuMax");
    player2.health=10000;

    printf("name:%s\n",player1.name);
    printf("Health:%d\n",player1.health);

    printf("name:%s\n",player2.name);
    printf("Health:%d\n",player2.health);
    return 0;
}