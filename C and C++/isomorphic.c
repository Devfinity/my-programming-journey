// Check Isomorphic Strings

// You are given two strings, ssand t. Determine whether these two strings are isomorphic.

// Two strings are said to be isomorphic if characters in string s can be replaced to get string t,
//  such that:

//     Each character in ss maps to exactly one character in t.
//     No two different characters in ss map to the same character in t.
//     The order of characters is preserved.
//     A character is allowed to map to itself.



#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsomorphic(char *s, char *t) {
    int i;
    
    char notebook[256] = {0};
    char notebook1[256] = {0};
    
    int len = strlen(s);
    int len1 = strlen(t);
    
    if(len != len1)
    {
        return false;
    }
    
    for(i = 0; i < len; i++)
    {
        if(notebook[s[i]] == '\0')
        {
            notebook[s[i]] = t[i];
        }
        else if(notebook[s[i]] != t[i])
        {
            return false;
        }
        
        if(notebook1[t[i]] == '\0')
        {
            notebook1[t[i]] = s[i];
        }
        else if(notebook1[t[i]] != s[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    char s[1000];
    char t[1000];

    printf("Number of Testcases: ");
    scanf("%d", &n);

    while(n > 0)
    {
        n--;

        printf("Enter the two string: ");
        scanf("%s %s", s, t);

        if(isIsomorphic(s, t))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}