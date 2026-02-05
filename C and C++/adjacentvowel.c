// Chef has a string S with him. 
// Chef is happy if the string contains a contiguous substring of length strictly greater than 2 
// in which all its characters are vowels.

// Determine whether Chef is happy or not.

// Note that, in english alphabet, vowels are a, e, i, o, and u.


#include <stdio.h>
#include <string.h>

int main() {
	int t;
	
	printf("Number of testcases: ");
	scanf("%d", &t);
	
	while(t > 0)
	{
	    char s[1001];
	    int happiness = 0;
	    int i;
	    
	    t--;
	    
		printf("Enter the String: ");
	    scanf("%s", s);
	    
	    int len = strlen(s);
	    
	    for(i = 0; i < len - 2; i++)
	    {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
	        {
	            if(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' ||
					 s[i + 1] == 'o' || s[i + 1] == 'u')
	            {
	                if(s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' ||
						 s[i + 2] == 'o' || s[i + 2] == 'u')
	                {
	                    happiness = 1;
	                    break;
	                }
	            }
	        }
	    }
	    if(happiness == 1)
	    {
	        printf("Chef is Happy! :D\n");
	    }
	    else
	    {
	        printf("Chef is Sad! :(\n");
	    }
	}
    return 0;
}

