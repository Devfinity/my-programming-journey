//Write a program that swaps the values of two numbers without using another variable.
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    
    printf("Provide two intergers to be swapped: ");
    scanf("%d %d", &a, &b);
    
    a = a + b; // it will add the value suppose a = 10+5 then a will be 15
    b = a - b; // here it will be b =15-5
    a = a - b; // and here it will be 15 - 10, making them swap
    printf("Values after swapping are a = %d and b = %d\n", a, b);
}