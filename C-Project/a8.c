#include <stdio.h>
#include <ctype.h>

int main()
{
    char question[][100]={"1.What Gojo name?","2.What Ben10 granpa?","3.What is your mother name?"};
    char choices[][100]={"A.Gojo","B.Yuji Itadori","C.Megumi","D.Ben10",
                        "A.Gwen","B.Pumax","C.Jetray","D.Ghostfish",
                        "A.Fish","B.Marin","C.GAI","D.Pumax"};
    char answers[3]={'A','B','C'};
    int score;char myanswer;
    int qrange=(sizeof(question)/sizeof(question[0]));

    for(int i=0;i<qrange;i++)
    {
        printf("********************\n");
        printf("%s\n",question[i]);
        printf("********************\n");

        for(int j=(i*4);j<(i*4)+4;j++)
        {
            printf("%s\n",choices[j]);
        }
        printf("Enter answer:");
        scanf(" %c",&myanswer);
        myanswer=toupper(myanswer);
        if(myanswer==answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
        
    }
    printf("Your score is: %d/3\n",score);

    return 0;
}