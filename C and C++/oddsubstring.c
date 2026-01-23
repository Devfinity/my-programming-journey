#include <stdio.h>
#include <string.h>

void findLargestOddSubstring(char num[]) 
{
    int i,odd = 0;
    size_t length;
    int check = 0;
    
    length = strlen(num);
    
    for(i = length - 1; i >= 0; i--)
    {
        if(num[i] % 2 != 0)
        {
            odd = i;
            check++;
            break;
        }
    }
    if(check == 0)
    {
        printf("-1");
        return;
    }
    for(i = 0; i <= odd; i++)
    {
        printf("%c", num[i]);
    }
    printf("\n");
}

int main()
{
    char value[100001];

    printf("Enter the string(of numbers): ");
    scanf("%100000s", value);

    findLargestOddSubstring(value);

    return 0;
}