//Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. 
//The array is rotated at some pivot point that is unknown. 
//Find the index at which k is present and if k is not present return -1.

#include <stdio.h>

int search(int n, int arr[], int k, int x)
{
    int i;
    int index = -1;
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

    for(i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            index = i;
        }
    }
    return index;
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

    printf("%d\n", search(n, arr, k, x));

    return 0;
}