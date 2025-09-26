//Write a program that checks if a number is positive, negative, or zero.
#include <stdio.h>

int main(void)
{
    int number;
    
    printf("Provide a integer: ");
    scanf("%d",&number);

    if(number >=1)
    {
        printf("The given number is positive\n");
    }
    else if(number <=-1)
    {
        printf("The given number is negative\n");
    }
    else
    {
        printf("It is zero\n");
    }
}