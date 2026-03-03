#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char player1[1000];
    char player2[1000];
    int i;
    int points[26] = {1 ,10 ,14 ,23 ,22 ,19 ,13 ,8 ,7 ,30 ,24 ,25 ,28 
                    ,33 ,26 ,4 ,27 ,21 ,16 ,20 ,3 ,12 ,11 ,5 ,18 ,32};

    printf("Both entered words should be of same length!\n");
    printf("Enter your word player1: ");
    scanf("%999s", player1);

    printf("Enter your word player2: ");
    scanf("%999s", player2);

    int len = strlen(player1);
    int len1 = strlen(player2);

    int index = 0;
    int score = 0;

    for(i = 0; i < len; i++)
    {
        if(isalpha(player1[i]))
        {
            char lower = tolower(player1[i]);
            index = lower - 'a';
            score += points[index];
        }
    }
    int score1 = 0;

    for(i = 0; i < len1; i++)
    {
        if(isalpha(player2[i]))
        {
            char lower1 = tolower(player2[i]);
            index = lower1 - 'a';
            score1 += points[index];
        }
    }

    if(score > score1)
    {
        printf("Player1 wins the match!\n");
    }
    else if(score < score1)
    {
        printf("Player2 wins the match!\n");
    }
    else
    {
        printf("Match ended in a draw!\n");
    }
    return 0;
}