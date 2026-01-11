//Write a program that finds the largest of three numbers.
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    printf("Provided three integer to compare which one is the greatest: ");
    scanf("%d %d %d", &a, &b, &c);
    
    //don't put extra else if's but put those 3 putting extra messes with the command
    if(a > b && a > c)
    {
        printf("%d is the greatest among the three integers\n", a);
    }
    else if(b > a && b > c)
    {
        printf("%d is the greatest among the three integers\n", b);
    }
    else if(c > a && c > b)
    {
        printf("%d is the greatest among the three integers\n", c);
    }
}