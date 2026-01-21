//This code reads 2 strings with 5 words each one is hidden and second is the guess
//We print "G" if hidden and guess are same else we print "B"

#include <stdio.h>

int main() {
	int t;
	
	printf("Enter number of testcases: ");
	scanf("%d", &t);
	
	while(t > 0)
	{
	    t--;
	    
	    char s[5], S;
	    char T[5], m;
	    int i = 0, j = 0;
	    
		printf("Hidden word(in Capital): ");
	    while (i < 5)
	    {
	        scanf("%c", &S);
	        if(S != ' ' && S != '\n')
	        {
	            s[i] = S;
	            i++;
	        }
	    }
		printf("Your Guess(in Capital): ");
	    while(j < 5)
	    {
	        scanf("%c", &m);
	        if(m != ' ' && m != '\n')
	        {
	            T[j] = m;
	            j++;
	        }
	    }
	    for(i = 0; i < 5; i++)
	    {
	        if(T[i] == s[i])
	        {
	            printf("G");
	        }
	        else if (T[i] != s[i])
	        {
	            printf("B");
	        }
	    }
	    printf("\n");
	}
    return 0;
}
