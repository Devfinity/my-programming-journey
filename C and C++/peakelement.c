#include <stdio.h>

int findpeakelementdupe(int n, int arr[])
{
    int i, peak = -1;
    int counter = -1;
        
    for(i = 1; i < n - 2; i++)
    {
        if(arr[i] > arr[i - 1] && arr[i + 1] < arr[i])
        {
            counter++;
        }
    }
        return counter;
}

int findpeakelement(int n, int arr[])
{
    int i, peak = -1;
    int counter = -1;
        
    for(i = 1; i < n - 2; i++)
    {
        if(arr[i] > arr[i - 1] && arr[i + 1] < arr[i])
        {
            peak = i;
            counter++;
        }
    }
    return peak;
}

int main()
{
    int i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(findpeakelementdupe(n, arr) > -1)
    {
        printf("True\n");
        return 0;
    }

    printf("Peak element index in the array is: %d\n", findpeakelement(n, arr));

    return 0;
} 