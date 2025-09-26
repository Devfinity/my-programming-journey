//Write a program that checks whether a given number is even or odd.
#include <stdio.h>

int main(void)
{
    int a;
    
    printf("Give a number to identify it as even or odd: ");
    scanf("%d", &a);

    if(a % 2 == 0)
    {
        printf("Provided number is even\n");
    }
    else
    {
        printf("Provided number is odd\n");
    }
}