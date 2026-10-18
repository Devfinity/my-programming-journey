// Given an array of integers nums, each element in the 
// array represents the maximum jump length at that position. 
// Initially starting at the first index of the array, 
// determine if it is possible to reach the last index. 
// Return true if the last index can be reached, otherwise return false.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = nums[0];

        for(int i = 0; i < nums.size(); i++)
        {
            if(farthest >= i)
            {
                int isItBigger = i + nums[i];

                if(farthest < isItBigger)
                {
                    farthest = isItBigger;
                }
            }

            if(farthest >= nums.size() - 1)
            {
                return true;
            }
        }
        return false;
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

    if(sol.canJump(nums))
    {
        cout << "Yes, we can jump to the last index!" << endl;
    }
    else
    {
        cout << "No, we can not jump to the last index!" << endl;
    }

    return 0;
}