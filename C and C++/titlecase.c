#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    	
    scanf("%d\n", &t);
    	
    while(t > 0)
    {
        t--;
        char s[1001];
        int i, isacronym = 0;
        
        fgets(s, 1001, stdin);
        
        char *token = strtok(s, " \n");
        
        while (token != NULL)
        {
            for(i = 0; token[i] != '\0'; i++)
            {
                isacronym = 0;
                if(islower(token[i]))
                {
                    isacronym = 1;
                    break;
                }
            }  
            if(isacronym == 1)
            {
                token[0] = toupper(token[0]);
                for(i = 1; token[i] != '\0'; i++)
                {
                    token[i] = tolower(token[i]);
                }
            }
            printf("%s ", token);
            token = strtok(NULL, " \n");
        }
        printf("\n");
    }
    return 0;
}

