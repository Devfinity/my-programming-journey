//You are given a sorted array of integers arr and an integer target. 
//Your task is to determine how many times target appears in arr.

#include <stdio.h>

int getoccurance(int n, int x[], int target)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if(x[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, target;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int x[n];

    printf("Enter Elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("Enter the element you want to find the occruence of: ");
    scanf("%d", &target);

    getoccurance(n, x, target);
    printf("The targeted number occured %d times!\n", getoccurance(n, x, target));

    return 0;
}