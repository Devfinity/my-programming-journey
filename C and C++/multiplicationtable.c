//Write a program that prints the multiplication table of a number (1 to 10).
#include <stdio.h>

int main(void)
{
    int n;
    int i;

    printf("What number multiplication table do you want?: ");
    scanf("%d", &n);
    
    for (i = 1; i <=10; i++)
        {
        printf("multiplication of number %d is: \n", n);
        printf("%d * %d = %d\n",n, i, n * i);
    } 
}