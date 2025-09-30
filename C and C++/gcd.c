//Write a program to find the Greatest Common Divisor (GCD) of two numbers.
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    
    printf("Provide two integer for GCD: ");
    scanf("%d %d", &a, &b); //don't put "\n" command will be stuck here
    
    int g;

    while (b != 0)
    {
        g = (a % b); // takes the remainder
        a = b; // a turns b
        b = g; // b turns remainder and then it loops
    }
    printf("%d\n", a);
}