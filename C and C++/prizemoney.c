// The total prize pool of the championship is 100⋅X100⋅X. At end of the 1414 Classical games, 
// if one player has strictly more points than the other, 
// he is declared the champion and gets 60⋅X60⋅X as his prize money, and the loser gets 40⋅X40⋅X.

// If the total points are tied, then the defending champion Carlsen is declared the winner.
//  However, if this happens, the winner gets only 55⋅X55⋅X, and the loser gets 45⋅X45⋅X.

// Given the results of all the 1414 games, output the prize money that Carlsen receives.

// The results are given as a string of length 1414 consisting of the characters C, N, and D.

//     C denotes a victory by Carlsen.
//     N denotes a victory by Chef.
//     D denotes a draw.


#include <stdio.h>

int main() {
    int t;
    
    printf("Number of testcases: ");
    scanf("%d", &t);
    
    while(t > 0)
    {
        char result[15];
        int carlsen = 0;
        int chef = 0;
        int x;
        t--;
        
        printf("Prize money: ");
        scanf("%d", &x);
        
        printf("Result of who won after each match: ");
        scanf("%s", result); //C is carlsen wins, N is chef wins and D is a draw
        //winner gets +2 points and draw gives 1 point to each of them
        for(int i = 0; i < 14; i++)
        {
            if(result[i] == 'C')
            {
                carlsen += 2;
            }
            else if(result[i] == 'N')
            {
                chef += 2;
            }
            else if(result[i] == 'D')
            {
                carlsen += 1;
                chef += 1;
            }
        }
        if(carlsen > chef)
        {
            printf("Carlsen got %d prize money\n", 60*x);
        }
        else if(carlsen < chef)
        {
            printf("Carlsen got %d prize money\n", 40*x);
        }
        else
        {
            printf("Carlsen got %d prize money\n", 55*x);
        }
    }
    return 0;
}

