#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int count[26] = {0};
    int len, len1, i;
    
    len = strlen(s);
    len1 = strlen(t);
    
    if(len != len1)
    {
        return 0;
    }
    
    for(i = 0; i < len; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[10001];
    char t[10001];

    printf("Enter the anagram: ");
    scanf("%s", s);

    printf("Enter the string to be checked for anagram: ");
    scanf("%s", t);

    if(isAnagram(s, t))
    {
        printf("Yes, the given string is anagram\n");
    }
    else
    {
        printf("No, the given string is not anagram\n");
    }
}