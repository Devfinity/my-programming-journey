//Write a program that takes an array of integers and sorts them in ascending order.
#include <stdio.h>

int main(void)
{
    long x;
    
    printf("Length of array: ");
    scanf("%ld", &x); //we got the length of array here

    long array[x];
    long i;

    for(i = 0;i < x; i++ )
    {
        scanf("%ld", &array[i]); //user giving values of array
    }
    printf("\n");
    long y;
    long pass;
    //bubble sort needs 2 for loops to work

    for(pass = 0; pass < x - 1; pass++) //puts array elements in its correct position
    {
        for(i = 0; i < x - pass - 1; i++) //looping array to compare
        {
            if(array[i] > array[i + 1]) //actual comparition
            {
            y = array[i]; //holds one value
            array[i] = array [i + 1]; //move the next one to left
            array[i + 1] = y; //put them back at right
            }
        }
    }
    for(i = 0; i < x; i++)
    {
        printf("%ld ", array[i]);
    }
    printf("\n");
}