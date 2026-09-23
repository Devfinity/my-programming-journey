#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexfind;

        for(int i = 0; i < nums.size(); i++)
        {
            int sumchecker = target - nums[i];

            if(indexfind.find(sumchecker) != indexfind.end())
            {
                return {indexfind[sumchecker], i};
            }
            indexfind[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    int n, target;
    //vector<int>& nums, int target

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout <<"Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the sum you want to find: ";
    cin >> target;

    vector<int> result = sol.twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}