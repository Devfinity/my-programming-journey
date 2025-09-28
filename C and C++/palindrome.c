//Write a program that checks if a number is palindrome (same forward and backward).
#include <stdio.h>

int main(void)
{
    long digit;

    printf("Provide a integer: ");
    scanf("%ld", &digit);

    long last_digit;
    long reverse = 0;
    while (digit != 0)
    {
        last_digit = digit % 10; 
        digit = digit / 10;
        reverse = reverse*10 + last_digit;
    }
    if(digit = reverse)
    {
        printf("Provided integer is Palindrome!\n");
    }
    else
    {
        printf("Provided integer is not Palindrome.\n");
    }
}