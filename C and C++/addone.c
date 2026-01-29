//how to handle big numbers addition using strings 

#include <stdio.h>
#include <string.h>

int main() {
	int i, t, len;
	
    printf("Number of testcases: ");
	scanf("%d", &t);
	
	while(t > 0)
	{
        t--;

	    char number[200005];
	    int holder = 0;
	    int one = 1;
	    
        printf("Enter the number(can handle big input): ");
	    scanf("%s", number);
	    
	    len = strlen(number);
	
	    for(i = len - 1; i >= 0; i--)
	    {
	        holder = number[i] - '0';
	        
	        holder += one;
	        
	        if(holder == 10)
	        {
                number[i] = '0';
                one = 1;
	        }
	        else
	        {
	            number[i] = holder + '0';
	            one = 0;
	            break;
	        }
	    }
	    if(one == 1)
	    {
	        printf("The number is now: 1");
	        printf("%s\n", number);
	    }
	    else
	    {
	        printf("The number is now: %s\n", number);
	    }
    }
	
	return 0;
}

