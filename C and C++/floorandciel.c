// Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. 
// The floor of x is the largest element in the array which is smaller than or equal to x. 
// The ceiling of x is the smallest element in the array greater than or equal to x. 
// If no floor or ceil exists, output -1.

#include <stdio.h>

void getfloorandceil(int n, int x)
{
    int i;
    int nums[n];
    int floor = -1, ceil = -1;

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(nums[i] == x)
        {
            floor = x;
            printf("Floor is %d", floor);
            break;
        }
        else if(nums[i] < x)
        {
            if(nums[i] > floor)
            {
                floor = nums[i];
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(nums[i] == x)
        {
            ceil = x;
            printf("Ceil is %d", ceil);
            break;
        }
        else if(nums[i] > x)
        {
            if(ceil == -1)
            {
                ceil = nums[i];
            }
            else if(nums[i] < ceil)
            {
                ceil = nums[i];
            }
        }
    }
    printf("[%d, %d]\n", floor, ceil);
    return;
}

int main()
{
    int n,  x;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter the number you want to find the floor and ceil of: ");
    scanf("%d", &x);

    getfloorandceil( n, x);
}