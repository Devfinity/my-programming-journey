#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 301

void longestCommonPrefix(char strs[][MAXLEN], int n, char result[]){
    int j, k = 0;
    bool issame = true;
    
    while(strs[0][k] != '\0') //checks when string ends 
    {
        for(int j = 1; j < n; j++)
        {
            if(strs[0][k] != strs[j][k]) //compares strs[0][0] to strs[1][0] and so on for not equal
            {                            //this condition does look odd but it is one thing is keeping
                issame = false;          //the string like interview it will be like i then n 
                break;                   //and so on for all strings bascially does the row checking
            }
        }
        if(!issame) //!issame is equal to writing issame != false or issame == true
        {
            break;
        }
        result[k] = strs[0][k]; //stores when all letters match each other 
        k++;
    }
    result[k] = '\0'; //makes it a string so it is easier to print
    printf("%s\n", result);
}

int main() 
{ 
    int n,i; 
    char result[301]; 
    
    printf("Number of strings: ");
    scanf("%d", &n); 
    
    char strings[n][301]; 
    for(i = 0; i < n; i++) 
    { 
        scanf("%s", strings[i]); 
    } 
    printf("Longest Common Prefix is: ");
    longestCommonPrefix(strings, n, result); 

    return 0; 
}