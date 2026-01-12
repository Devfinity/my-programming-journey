#include <stdio.h>

void removeOuterParentheses(char *s, char *result) {
    int depth = 0;
    int i;
    int keep =0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(')
        {
            if(depth > 0)
            {
                result[keep] = s[i];
                keep++;
            }
            depth++;
        }
        
        else if(s[i] == ')')
            {
                depth--;
                
                if(depth > 0)
                {
                    result[keep] = s[i];
                    keep++;
                }
            }
    }
    result[keep] = '\0';
}

int main()
{
    int t;
    
    printf("Number of testcases: ");
    scanf("%d", &t);
    
    while(t > 0)
    {
        t--;
        
        char s[2000];
        char result[2000];
        
        printf("Enter the order of parenteses: ");
        scanf("%s", s);
        
        removeOuterParentheses(s, result);
        
        printf("%s\n", result);
    }
}