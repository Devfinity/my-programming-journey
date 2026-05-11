// Given an integer array nums of even length 
// consisting of an equal number of positive and negative integers.
// Return the answer array in such a way that the given conditions are met:


//Every consecutive pair of integers have opposite signs.


//For all integers with the same sign, the order in which they were present in nums is preserved.


//The rearranged array begins with a positive integer.

#include <stdio.h>

void rearrangearray(int n)
{
    int i;
    int positive = 0;
    int negative = 1;
    int arr[n];
    int write[n];

    printf("Enter elements of array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        write[i] = arr[i];
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            write[positive] = arr[i];
            
            if(positive + 2 >= n)
            {
                continue;
            }
            positive += 2;
        }
        else
        {
            write[negative] = arr[i];
            
            if(negative + 2 > n)
            {
                continue;
            }
            negative += 2;
        }
        printf("\n");
    }


    for(i = 0; i < n; i++)
    {

        printf("%d ", write[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    rearrangearray(n);
}