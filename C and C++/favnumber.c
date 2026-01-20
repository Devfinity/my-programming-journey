#include <stdio.h>

int main() {
    int t;
    
    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) {
        int a;

        printf("Enter the number: ");
        scanf("%d", &a);
        if (a % 2 == 0 && a % 7 == 0) 
        {
            printf("Will take home Alice\n");
        }
         else if (a % 2 == 1 && a % 9 == 0) 
        {
            printf("Will take home Bob\n");
        }
         else 
        {
            printf("Will take home Charlie\n");
        }
    }
    return 0;
}