//code to check if no two consicutive chracters are same in the string
//the input is only in the form of 0s and 1s

#include <stdio.h>

int main() {
	int t;
	
    printf("Number of testcases: ");
	scanf("%d", &t);
	
	while(t > 0)
	{
	    t--;
	    
	    int n, i = 0;
	    int count = 0;
	    char j;
	    
        printf("Length of string: ");
	    scanf("%d", &n);
	    char s[n+1];
	    
        printf("Value of string(in 0 and 1 only): ");
	    while(i < n)
	    {
	        scanf(" %c", &j);

            s[i] = j;
            i++;
	    }
	    for(i = 0; i < n - 1; i++)
	    {
	        if(s[i] == s[i+1])
	        {
	            count++;
	        }
	    }
	    s[n] = '\0';
	    printf("Minimum steps required: %d\n", count);
	}
    return 0;
}

