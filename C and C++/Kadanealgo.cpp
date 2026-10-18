#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = 0;
        int previousmax = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            max += nums[i];
            if(max > previousmax)
            {
                previousmax = max;
            }   
            if(max < 0)
            {
                max = 0;
            }
        }
        return previousmax;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elemetns of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Subarray with the largest sum is: " << sol.maxSubArray(nums) << endl;

    return 0;
}