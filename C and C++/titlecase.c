#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    	
    scanf("%d\n", &t); //the "\n" is need so we don't get issue for putting scanf and fgets 
    	               //next to each other
    while(t > 0)
    {
        t--;
        char s[1001];
        int i, isacronym = 0; //flag once again
        
        fgets(s, 1001, stdin); //this is a sentence!
        
        char *token = strtok(s, " \n"); // token is one word!
        
        while (token != NULL)
        {
            for(i = 0; token[i] != '\0'; i++)
            {
                isacronym = 0;
                if(islower(token[i])) //token[i] is one letter!
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

