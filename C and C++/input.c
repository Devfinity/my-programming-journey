#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Address A %p\n", &a);
    printf("Address B %p\n", &b);
    printf("Please provide 2 intgers: ");
    scanf("%d %d", &a, &b);
    printf("Provided values: %d %d\n", a, b);
    printf("Sum of the provided values: %d\n", a + b);
    printf("Subtraction of the provided values: %d\n", a - b);
    printf("Multiplication of the provided values: %d\n", a * b);
    printf("Division of the provided values: %f\n", (float)a / (float)b);
    return 0;
}
