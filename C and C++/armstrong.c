//Write a program that checks whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main(void) 
{ 
    long original; printf("Provide a integer: ");
    scanf("%ld", &original); 
    
    long last_digit;
    long copy = original;
    long copy1 = original;
    long power = 0;

    while(original != 0)
    { 
        last_digit = original % 10;
        original = original / 10;
        power++;
    } 
    long sum = 0;
    
    while(copy != 0)
    {
        last_digit = copy % 10;
        sum += (long)pow(last_digit, power);
        copy = copy / 10;
    }
    if(sum == copy1)
    {
        printf("%ld is a armstrong number\n", copy1);
    }
    else
    {
        printf("%ld is not a armstrong number\n", copy1);
    }
}