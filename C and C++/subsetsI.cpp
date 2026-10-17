#include <iostream>
#include <vector>
using namespace std;

// RECURSIVE APPROACH — KEPT FOR REFERENCE

//     void solve(int i, int currentSum, vector<int>& nums,
//                vector<int>& result)
//     {
//         if(i == nums.size())
//         {
//             result.push_back(currentSum);
//             return;
//         }

//         // Exclude current element
//         solve(i + 1, currentSum, nums, result);

//         // Include current element
//         solve(i + 1, currentSum + nums[i], nums, result);
//     }

//     vector<int> subsetSumsRecursive(vector<int>& nums)
//     {
//         vector<int> result;
//         solve(0, 0, nums, result);
//         return result;
//     }

class Solution {
  public:
    vector<int> subsetSums(vector<int>& nums) {
        vector<int> sum = {0};

        for(int i = 0; i < nums.size(); i++)
        {
            int handler = sum.size();

            for(int j = 0; j < handler; j++)
            {
                int newValue = sum[j] + nums[i];
                sum.push_back(newValue);
            }
        } 

        return sum; 
    }
};

int main()
{
    Solution sol; 
    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> subsets = sol.subsetSums(nums);

    cout << "Final array with all values is: ";
    for(int i = 0; i < subsets.size(); i++)
    {
        cout << subsets[i] << " ";
    }
    cout << endl;

    return 0;
}