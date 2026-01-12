#include <stdio.h>

int main() {
    int t;

    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) {
        int n,i;
        
        printf("Number of Elements: ");
        scanf("%d", &n);
        int d[n];
        
        printf("Elements: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        int d1 = 1;
        
        for(i = 1; i < n; i++)
        {   
            if(d[i] < d[i - 1])
            {    
                d1 = 0;
                break;
            }
        }
        
        if(d1 == 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}