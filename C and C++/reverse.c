//Write a program that reverses a number (e.g., 123 → 321).
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
    printf("Reverse of the provided integer is: %ld\n", reverse);
}