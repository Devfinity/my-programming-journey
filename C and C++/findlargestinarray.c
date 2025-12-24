#include <stdio.h>

int main() {
	int T,n,i;

    printf("Number of testcases: ");
	scanf("%d", &T);
	
    while(T > 0)
    {
        T--;
        printf("Number of elements in array: ");
        scanf("%d", &n);
        
        int arr[n];
        
        printf("Enter elements: ");
        for(i = 0; i <n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        int temp = arr[0];

         for(i = 0; i < n; i++)
        {
            if(arr[i] > temp)
            {
                temp = arr[i];
            }
        }
        printf("The largest number inside the array is: %d\n", temp);
    }
    
    return 0;
}