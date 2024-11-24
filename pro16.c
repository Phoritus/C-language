#include <stdio.h>
//nest loop = a loop inside of another loop

int rows;int column;
char symbol;
int main()
{
    printf("Enter rows:");
    scanf("%d",&rows);
    printf("Enter symbol:");
    scanf(" %c",&symbol);

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    for(int a=rows-1;a>=1;a--)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}