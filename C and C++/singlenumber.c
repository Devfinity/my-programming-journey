//In this code the array has elements who come twice this code finds the element 
// which doesn't repeat itself
#include <stdio.h>

int singleNumber(int nums[], int n) {
    int checking = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        checking ^= nums[i]; //XORing (New Method)
    }
    return checking;
}

int main()
{
    int t,x,i;

    printf("Number of testcases: ");
    scanf("%d", &t);

    while(t > 0)
    {
        t--;

        printf("Number of elements in array: ");
        scanf("%d", &x);

        int y[x];

        printf("Elements: ");
        for(i = 0; i < x; i++)
        {
            scanf("%d", &y[i]);
        }
        printf("Single number in this array is: %d\n", singleNumber(y, x));
    }
}