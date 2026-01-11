// alice and bob are running for n days in "t" testcases find when they are both happy
// alice is unhappy when bob ran strictly more then twice the alice and same for bob

#include <stdio.h>

int main() {
    int t;
     
    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) {
        int n,j,i;

        printf("Number of days they ran: ");
        scanf("%d", &n);
        int a[n], b[n];
        
        printf("Alice ran for(in meters): ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        printf("Bob ran for(in meters): ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        int happymax = 0;
        int bob = 0;
        int alice = 0;
        
        for(j = 0; j < n; j++)
        {
            if (a[j] > 2 * b[j] && b[j] > 2 * a[j])
            {
                happymax++;
            }
        }
        printf("%d\n", happymax);
    }
    
    return 0;
}
