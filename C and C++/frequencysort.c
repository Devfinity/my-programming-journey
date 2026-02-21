// Chef and Character Frequency Sort

// Chef is experimenting with strings. 
// He wants to rearrange all the characters of a given string S in decreasing order of their frequency.

// If two characters have the same frequency, 
// Chef sorts them in lexicographical (ASCII) order.

// Help Chef by printing the final rearranged string.

#include <stdio.h>
#include<string.h>

void sortByFrequency(char *s) {
    int count[128] = {0};
    int len, i, j, k;
    int max = 0;
    
    len = strlen(s);
    
    for(i = 0; i < len; i++)
    {
        count[s[i]]++;
    }
    while(1)
    {
        max = 0;
        
        for(i = 0; i < 128; i++)
        {
            if(count[i] > max)
            {
                max = count[i];
            }
        }
        
        if(max == 0)
        {
            break;
        }
        
        for(j = 0; j < 128; j++)
        {
            if(count[j] == max)
            {
               for(k = 0; k < max; k++)
               {
                   printf("%c", j);
               }
               count[j] = 0;
            }
        }
    }
    printf("\n");
    return;
}

int main()
{
    char s[100001];

    printf("Enter the string for frequency sort: ");
    scanf("%s", s);

    printf("The sorted frequeny is: ");
    sortByFrequency(s);

    return 0;
}