//find the largest and second largest in a array and print out the sum

#include <stdio.h>

int main() {
    int t,j;
    
    printf("Number of testcases: ");
    scanf("%d", &t);

    while (t--) {
        int n,i;
        
        printf("Number of Elemnts: ");
        scanf("%d", &n);
        int a[n];

        printf("Elements: ");
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int temp = a[0];
        int second = -1;

        for(i = 1; i < n; i++)
        {
            if(a[i] > temp)
            {
                second = temp;
                temp = a[i];
            }    
            
            else if (a[i] > second && a[i] != temp)
            {
                second = a[i];
            }

            if(second == -1)
            {
                second = a[0];

                for(int i = 1; i < n; ++i)
                {
                    if(a[i] != temp)
                    {
                        second = a[i];
                        break;
                    }   
                }
            }
        }
        printf("%d\n", temp + second);

    }

    return 0;
}
