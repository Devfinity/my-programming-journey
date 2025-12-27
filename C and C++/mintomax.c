#include <stdio.h>

int countNonMinimum(int a[], int n) {
    if (n == 0) return 0;

    int minimum = a[0];
    int i, findmin = 0;

    for (i = 0; i < n; i++) {
        if (a[i] < minimum) {
            minimum = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] == minimum)
            findmin++;
    }

    return n - findmin;
}

int main()
{
    int t;
    
    printf("Number of Testcases: ");
    scanf("%d", &t);

    int x;
    while(t > 0)
    {
        t--;
        
        printf("Number of Elements in array: ");
        scanf("%d", &x);
        
        int y[x];
        
        printf("Elements of array: ");
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &y[i]);
        }
        
        printf("%d\n", countNonMinimum(y, x));
    }
    return 0;
}