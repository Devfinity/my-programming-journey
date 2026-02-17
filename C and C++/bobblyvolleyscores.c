// Blobby Volley Scores

// Alice and Bob are playing a game of Blobby Volley. In this game, in each turn, 
// one player is the server and the other player is the receiver. 
// Initially, Alice is the server, and Bob is the receiver.

// If the server wins the point in this turn, their score increases by 1 
// they remain as the server for the next turn.
// But if the receiver wins the point in this turn, their score does not increase. 
// But they become the server in the next turn.
// In other words, your score increases only when you win a point when you are the server.
// Please see the Sample Inputs and Explanation for more detailed explanation.

// They start with a score of 00 each, and play NN turns. 
// The winner of each of those hands is given to you as a string consisting of 'A's and 'B's. 
// 'A' denoting that Alice won that point, and 'B' denoting that Bob won that point. 
// Your job is the find the score of both of them after the N turns.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int t;

    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) 
    {
        int n, i;
        int Alice = 0;
        int Bob = 0;
        bool server_a = true;

        printf("Number of Rounds: ");
        scanf("%d", &n);
        
        char s[n+1];

        printf("Who won in each round (A or B): ");
        scanf("%s", s);
        
        int len = strlen(s);

        for(i = 0;i < len; i++)
        {
            if(server_a == true)
            {
                if(s[i] == 'A')
                {
                    Alice++;
                }
                else
                {
                    server_a = false;
                }
            }
            else 
            {
                if(s[i] == 'B')
                {
                    Bob++;
                }
                else
                {
                    server_a = true;
                }
            }
        }
        printf("the Final points are: %d %d\n", Alice, Bob);
    }

    return 0;
}
