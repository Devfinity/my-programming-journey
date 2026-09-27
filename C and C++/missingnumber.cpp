#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int check = nums.size(); //cause the loop handles till nums - 1

        // brute force
        //int check = 0;
        // sort(nums.begin(), nums.end());

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(check == nums[i])
        //     {
        //         check++;
        //     }
        //     else
        //     {
        //         return check;
        //     }
        // }
        // return check;

        for(int i = 0; i < nums.size(); i++)
        {
            check ^= i ^ nums[i];
        }
        return check;
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

    cout << "Missing number is: " << sol.missingNumber(nums) << endl;

    return 0;
}