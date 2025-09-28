//Write a program that prints the Fibonacci sequence up to n terms.
#include <stdio.h>

int main(void)
{
    long digit;

    printf("Provide a integer: ");
    scanf("%ld", &digit);

    long fibonacci;
    long new_digit1 = 0; 
    long new_digit2 = 1;
    long i;

    printf("0 ");

    for(i = digit; i >= 2; i--)
    {
        fibonacci = new_digit1 + new_digit2;
        new_digit1 = new_digit2;
        new_digit2 = fibonacci;
        printf("%ld ", new_digit1);
    }
    printf("\n");
    return 0;
}