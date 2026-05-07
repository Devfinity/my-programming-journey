// You are given an array arr[] of size n - 1 that contains 
// distinct integers in the range from 1 to n (inclusive). 
// This array represents a permutation of the integers from 1 to n with one element missing. 
// Your task is to identify and return the missing element.

#include <stdio.h>

int missingNum(int *arr, int size) {

    int i;
    int temp = size;
    int sum2 = 0;

    for(i = 0; i < size - 1; i++)
    {
        sum2 = sum2 + arr[i];
    }

    int sum1 = 0;
    for(i = 0; i < size; i++)
    {
        sum1 = sum1 + temp;
        temp = temp - 1;
    }

    int missing = 0;
    if(sum1 != sum2)
    {
        missing = sum1 - sum2;
    }

    return missing;
}

int main()
{
    int i, n;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter the elements: ");
    for(i = 0; i <n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    missingNum(arr, n);
    printf("The missing number is %d\n", missingNum(arr, n));
}