#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumSmaller(vector<int>& nums, const int target, int n) {
        int triplet = 0; 
        int i = 0;
        int left = i + 1, right = n - 1;
        int sum;

        sort(nums.begin(), nums.end());

        for(i; i < n - 2; i++)
        {
            left = i + 1;
            right = n - 1;

            while(left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if(sum < target)
                {
                    triplet += right - left;
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return triplet;


        //brute force not using cause it stops working when array is big
        // for(int i = 0; i < n -2;i++)
        // {
        //     for(int j = i + 1; j < n; j++) 
        //     {
        //         for(int k = j + 1; k < n; k++)
        //         {
        //             if(nums[i] + nums[j] + nums[k] < target)
        //             {
        //                 triplet++;
        //             }
        //         }
        //     }
        // }
    }
};

int main()
{
    int n, target;
    
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    Solution sum;
    cout << "triplet: " << sum.threeSumSmaller(nums, target, n) << "\n";

    return 0;
}