#include <stdio.h>

int main() {
	int n,x,i;
	
	printf("enter size of elements and element that is to be found: ");
    scanf("%d %d", &n, &x);
	int arr[n];
	
	for(i = 0; i < n; i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	for(i = 0; i < n; i++)
	{
	    if(arr[i] == x)
	    {
	        printf("YES\n");
            return 0;
	    }
	}
    printf("NO\n");
    return 0;
}