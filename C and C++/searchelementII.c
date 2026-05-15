// Given an integer array arr of size N, 
// sorted in ascending order (may contain duplicate values) and a target value k. 
// Now the array is rotated at some pivot point unknown to you. 
// Return True if k is present and otherwise, return False. 

#include <stdio.h>
#include <stdbool.h>

bool search(int n, int arr[], int k, int x)
{
    int i;
    int checker = false;
    int front = 0, count = 0;

    while(front < x)
    {
        int temp = arr[n - 1];

        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        front++;
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            checker = true;
            return true;
        }
    }
}

void counter(int n, int arr[], int k)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            count++;
        }
    }
    printf("That number was repeated %d times in the array\n", count);
    return;
}

int main()
{
    int n, k, x;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("How many time you want to rotate array: ");
    scanf("%d", &x);

    printf("Enter the value you want to find in the rotated array: ");
    scanf("%d", &k);

    if(search(n, arr, k, x) == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    counter(n, arr, k);
    return 0;
}