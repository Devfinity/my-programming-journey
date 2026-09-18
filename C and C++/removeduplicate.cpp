#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        int j = 1;

        for(auto i = nums.begin() + 1; i != nums.end(); ++i)
        {
            if(*(i - 1) == *i)
            {
                continue;
            }
            else
            {
                nums[j] = *i;
                j++;
            }
        }
        return j;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int size = sol.removeDuplicates(nums);
    
    cout << "Array is: ";
    for(int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}