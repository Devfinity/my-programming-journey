#include <stdio.h>

void rotationright(int n, int arr[], int x)
{
    int i;
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
    return;
}

void rotationleft(int n, int arr[], int x)
{
    int i;
    int last = 0;

    while(last < x)
    {
        int temp = arr[0];

        for(i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        last++;
    }
    return;
}

int main() 
{
    int i, n, x, ch;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of times you want to rotate the array: ");
    scanf("%d", &x);

    printf("Enter your choice:\n 1. Rotation from right\n 2. Rotation from left\n");
    printf("\nYour Choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1: 
        
        rotationright(n, arr, x);
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break; 
        
        case 2: 

        rotationleft(n, arr, x);
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;

        default: printf("Invalid choice!");
        break;
    }
    return 0;
}