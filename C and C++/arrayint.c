//Write a program that takes an array of integers and sorts them in ascending order.
#include <stdio.h>

int main(void)
{
    long x;
    
    printf("Length of array: ");
    scanf("%ld", &x);

    long array[x];
    long i;

    for(i = 0;i < x; i++ )
    {
        scanf("%ld", &array[i]);
    }
    printf("\n");
    long y;
    long pass;

    for(pass = 0; pass < x - 1; pass++)
    {
        for(i = 0; i < x - pass - 1; i++)
        {
            if(array[i] > array[i + 1])
            {
            y = array[i];
            array[i] = array [i + 1];
            array[i + 1] = y;
            }
        }
    }
    for(i = 0; i < x; i++)
    {
        printf("%ld ", array[i]);
    }
    printf("\n");
}