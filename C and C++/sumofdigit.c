//Write a program that finds the sum of digits of a number (e.g., 123 → 1+2+3 = 6).
#include <stdio.h>

int main(void)
{
    long digit;

    printf("Provide a integer: ");
    scanf("%ld", &digit);

    long last_digit;
    long sum =0;

    while(digit > 0)
    {
        last_digit = digit % 10;
        digit = digit / 10;
        sum = sum + last_digit;
        
    }
    printf("Sum of the digit is: %ld\n", sum);
}