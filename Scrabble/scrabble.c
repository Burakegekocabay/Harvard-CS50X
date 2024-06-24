#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int scores[26] = {1 ,3 ,3 ,2,1 ,4 ,2 ,4 ,1 ,8 ,5 ,1 ,3 ,1 ,1 ,3 ,10 ,1 ,1 ,1 ,1 ,4 ,4 ,8 ,4 ,10};
    char p1[50];
    char p2[50];
    int score1=0;
    int score2=0;
    printf("Player 1: ");
    scanf("%s", p1);
    printf("Player 2: ");
    scanf("%s", p2);
    for (int i = 0; p1[i] != '\0'; i++)
    {
        if (p1[i] <'A' || p1[i] >'z' || p1[i] <'a' && p1[i] >'Z')
        {
            continue;
        }
        
        int index =toupper(p1[i])-'A';
        score1 += scores[index];

    }
    for (int i = 0; p2[i] != '\0'; i++)
    {
        if (p1[i] <'A' || p1[i] >'z' || p1[i] <'a' && p1[i] >'Z')
        {
            continue;
        }
        int index = toupper(p2[i])-'A';
        score2 += scores[index];
    }
    
    
    if (score1==score2)
    {
        printf("It's a tie!\n");
    }
    else if (score1>score2)
    {
        printf("Player 1 won\n");
        printf("Scores: %d %d\n",score1,score2);
    }
    else
    {
        printf("Player 2 won \n");
        printf("Scores: %d %d\n",score1,score2);
    }
    
    
    

    return 0;
}
