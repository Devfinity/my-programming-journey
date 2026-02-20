// Rotate String

// You are given two strings s and goal of equal length. 
// Determine whether string s can be transformed into string goal by performing a series of left-shifts.

// A left-shift operation moves the first character of a string to the end of the string. 
// For example, a left-shift on "abcde" results in "bcdea".

// If it is possible to transform S into G using zero or more left-shifts, print "Yes".
// Otherwise, print "No".

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canRotate(char s[], char goal[]) {
    int len, len1, i, j;
    char temp, temp1;
    
    len = strlen(s);
    len1 = strlen(goal);
    
    if(len != len1)
    {
        return false;
    }
    
    for(j = 0; j < len; j++)
    {
        if(strcmp(s, goal) == 0)
        {
            return true;
        }
        temp = s[0];
        
        for(i = 0; i < len - 1; i++)
        {
            s[i] = s[i + 1];
        }
        s[len - 1] = temp;
    }
    return false;
}

int main()
{
    char n[101];
    char goal[101];

    printf("Enter the string to be rotated(left-shifted): ");
    scanf("%s", n);

    printf("Enter how to string should look after rotated(left-shifted): ");
    scanf("%s", goal);

    if(canRotate(n, goal))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}