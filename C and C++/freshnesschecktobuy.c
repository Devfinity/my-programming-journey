#include <stdio.h>

int main() {
    int t;

    printf("Testcases: ");
    scanf("%d", &t);

    while (t--) {
        int n, x, i, j;
        int total = 0;
        
        printf("Enter number of items and minimum freshness value: ");
        scanf("%d %d", &n, &x);
        int a[n], b[n];
        
        printf("freshness value of each item: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        printf("Prices of each item: ");
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[j]);
            
            if(x <= a[j])
            {
                total += b[j];
            }    
        }
        printf("Total cost of items: %d\n", total);
    }

}