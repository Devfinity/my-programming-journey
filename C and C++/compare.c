//Write a program that finds the larger of two numbers.
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    
    printf("Give two integers for comparison: ");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("greater value is: %d\n", b);
    }
    else if (a > b)
    {
        printf("greater value is: %d\n", a);
    }
    else
    {
        printf("Both of the given values are equal\n");
    }
}