#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min=1;
    int max=100;
    srand(time(0));
    int answer=(rand()%max)+1;//generate random number
    int guess;int guesses;
    
    do
    {
        printf("Enter guess:");
        scanf(" %d",&guess);
        if(guess<answer)
        {
            printf("Too low!!\n");
        }
        else if (guess>answer)
        {
            printf("Too high\n");
        }
        
        else
        {
            printf("\n");
            printf("Finally correct!!\n");
        }
        guesses++;
        
    } while (guess!=answer);
    printf("\n");
    printf("Guesses:%d\n",guesses);
    printf("Answer:%d",answer);
    
    
    
    return 0;
}