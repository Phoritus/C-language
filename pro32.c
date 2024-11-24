#include <stdio.h>

// read file

int main()
{
    FILE *pA = fopen("C:\\Users\\poohz\\OneDrive\\Desktop\\quiz.txt", "r");
    char buffer[1000];
    if (pA == NULL)
    {
        printf("Unable to open file");
    }
    else
    {
        while (fgets(buffer, 1000, pA) != NULL)
        {
            printf("%s", buffer);
        }
    }

    return 0;
}