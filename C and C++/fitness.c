//Office worker walks home to work and back and goes office 5 days a week
//Tell the distance he travels in a week

#include <stdio.h>

int main() {
    int t;

    printf("Number of testcases: ");
    scanf("%d", &t);
    
    while (t--) {
        int x,i;

        printf("Distane between home and office: ");
        scanf("%d", &x);
        
        int counter = 0;
        
        for(i = 0; i < 5; i++)
        {
            counter = counter + x;
        }
        counter = counter * 2;
        printf("%d\n", counter);
    }
    
}
