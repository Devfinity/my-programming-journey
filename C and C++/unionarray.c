// Given two sorted arrays nums1 and nums2, 
// return an array that contains the union of these two arrays. 
// The elements in the union must be in ascending order.


// The union of two arrays is an array where 
// all values are distinct and are present in either the first array, 
// the second array, or both.

#include<stdio.h>
#include<stdbool.h>

void Solution(int *nums1, int *nums2, int n, int n1)
{
    int i, j, temp = 0;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(nums1[j] > nums1[j + 1])
           {
                temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }
    
    for(i = 0; i < n1 - 1; i++)
    {
        for(j = 0; j < n1 - 1; j++)
        {
            if(nums2[j] > nums2[j + 1])
            {
                temp = nums2[j];
                nums2[j] = nums2[j + 1];
                nums2[j + 1] = temp;
            }
        }
    }

    bool dupe = false;
    int unionarray[100] = {0};

    for(i = 0; i < n;i++)
    {
        unionarray[i] = nums1[i];
    }

    int count = n;
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < count; j++)
        {
            if(nums2[i] == unionarray[j])
            {
                dupe = true;
                break;
            }
        }
        
        if(dupe != true)
        {
            unionarray[count] = nums2[i];
            count++;
        }    
        dupe = false;
    }

    for(i = 0; i < count; i++)
    {
        printf("%d ", unionarray[i]);
    }
    printf("\n");
    
    return;

}

int main()
{
    int i, n, n1;
    
    printf("enter the size of First Array: ");
    scanf("%d", &n);

    int nums1[n];

    printf("Enter the elements: ");
    for(i = 0; i <n; i++)
    {
        scanf("%d", &nums1[i]);
    }

     printf("enter the size of Second Array: ");
    scanf("%d", &n1);

    int nums2[n1];

    printf("Enter the elements: ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &nums2[i]);
    }

    Solution(nums1, nums2, n, n1);
}