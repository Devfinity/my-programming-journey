//Write a program that checks if a number is prime.
#include <stdio.h>

int main(void)
{
    long digit;

    printf("Provide a integer: ");
    scanf("%ld", &digit);

    long i;
    long prime = 1;

    for(i = 2; i < digit; i++)
    {
        digit % i == 0;
        if(digit % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("The given number is prime\n");
    }
    else
    {
        printf("THe given number is not prime\n");
    }
}