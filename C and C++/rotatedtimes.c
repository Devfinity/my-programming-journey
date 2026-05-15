#include <stdio.h>

int timesrotated(int n, int arr[])
{
    int i;
    int count = 0;

    for(i = 0; i < n - 1; i ++)
    {
        if(arr[i] < arr[i + 1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("Array was rotated %d times\n", count + 1);
}

int main()
{
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("It is for right to left rotated array\n");
    printf("Enter the rotated elements: ");
    for(i = 0;i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    timesrotated(n, arr);
}