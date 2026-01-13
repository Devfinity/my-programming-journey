#include <stdio.h>

int main() {
    int t;

    printf("Number of Testcases: ");
    scanf("%d", &t);

    while (t--) {
        int n,i;

        printf("Number of Elements: ");
        scanf("%d", &n);
        
        char s[n + 1];

        printf("Elements: ");
        scanf("%s", s);

        for(i = 0; i < n; i += 2)
        {
            if(s[i] == '0' && s[i + 1] == '0')
            {
                printf("A");
            }
            else if(s[i] == '0' && s[i + 1] == '1')
            {
                printf("T");
            }
            else if(s[i] == '1' && s[i + 1] == '0')
            {
                printf("C");
            }
            else
            {
                printf("G");
            }
        }
        printf("\n");
    }

    return 0;
}
