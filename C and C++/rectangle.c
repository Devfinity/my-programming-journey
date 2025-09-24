//Write a program that asks the user for the length and width of a rectangle and prints its area.
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Provide length and breath for area of a rectangle: ");
    scanf ("%d  %d", &a, &b);

    printf("Area of the rectangle of the given lenth and breath is: %i\n", a * b);
    return 0;
}