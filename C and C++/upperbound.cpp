#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxcount = 0;
        int answer;

        unordered_map<int, int> counter;

        for(int mapping : nums)
        {
            counter[mapping]++;
        }

        for(auto max : counter)
        {
            if(maxcount < max.second)
            {
                maxcount = max.second;
                answer = max.first;
            }
        }

        return answer;
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

    cout << "Majority element is: " << sol.majorityElement(nums) << endl;

    return 0;
}