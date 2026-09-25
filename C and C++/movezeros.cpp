#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int arrange = 0;

        for(int i = 0; i < nums.size(); i++)
        {
                if(nums[i] != 0)
                {
                    nums[arrange] = nums[i];
                    arrange++;
                }
        }

        for(int i = arrange; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
        return;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sol.moveZeroes(nums);

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}