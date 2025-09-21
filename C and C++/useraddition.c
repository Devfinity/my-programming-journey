#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Provide two integers for the addition: ");
    scanf ("%d  %d", &a, &b);

    printf("sum of the provided integers is: %i\n", a + b);
    return 0;
}