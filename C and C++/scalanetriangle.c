#include <stdio.h>

int main() {
    int t;
    
    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        
        printf("Sides of triangle: ");
        scanf("%d %d %d", &a, &b, &c);
        
        if(a != b && a != c && b != c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
