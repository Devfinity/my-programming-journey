//checks if the given elements are in ascending order,desecending order or none of those

#include <stdio.h>

int main()
{
    int x, i;
    printf("Enter number of elements: ");
    scanf("%d", &x);

    int y[x];

    printf("Enter elements: ");
    for(i = 0; i < x; i++)
    {
        scanf("%d", &y[i]);
    }

    int a = 0;
    int d = 0;

    for(i = 1; i < x; i++)
    {
        if(y[i] < y[i - 1])
            a++;
    }

    for(i = 1; i < x; i++)
    {
        if(y[i] > y[i - 1])
            d++;
    }

    if(a == 0)
        printf("Ascending\n");
    else if(d == 0)
        printf("Descending\n");
    else
        printf("Neither ascending nor descending\n");

    return 0;
}
