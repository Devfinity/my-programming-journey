#include<iostream>
#include<vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        int temp;
        
        auto max = max_element(nums.begin(), nums.end());
        auto min = min_element(nums.begin(), nums.end());

        unordered_set<int> duplicate;

        if(*max - *min == nums.size() - 1)
        {
            for(auto i = nums.begin(); i != nums.end(); ++i)
            {
                auto result = duplicate.insert(*i);
                {
                    if(result.second == false)
                    {
                        return false;
                    }
                }
            }
        }
        else
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;

    int n;

    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "was the array consecutive?\n";
    if(sol.isConsecutive(nums))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}