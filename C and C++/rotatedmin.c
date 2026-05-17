// Given an integer array arr of size N, sorted in ascending order (with distinct values), 
// the array is rotated at any index which is unknown. 
// Find the minimum element in the array. 

#include <stdio.h>

int findmin(int n, int arr[], int x)
{
    int i;
    int min = 0;
    int front = 0;

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

    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] < arr[i + 1])
        {
            if(min > arr[i])
            {
                min = arr[i];
            }
        }
    }
    return min;
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

    printf("Smallest number in the rotated array is %d\n", findmin(n, arr, x));

    return 0;
}