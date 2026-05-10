//You are given an array of integers, 
// your task is to move all the zeros in the array to the end of the array and 
// move non-negative integers to the front by maintaining their order. 

#include <stdio.h>

void movezeros(int nums)
{
    int i;
    int arrange = 0;
    int order[nums];

    printf("Enter Elements of array: ");
    for(i = 0; i < nums; i++)
    {
        scanf("%d", &order[i]);
    }

    for(i = 0; i < nums; i++)
    {
            if(order[i] != 0)
            {
                order[arrange] = order[i];
                arrange++;
            }
    }

    for(i = arrange; i < nums; i++)
    {
        order[i] = 0;
    }

    for(i = 0; i < nums; i++)
    {
        printf("%d ", order[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    movezeros(n);
}