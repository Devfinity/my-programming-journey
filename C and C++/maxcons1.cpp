#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int counter = 0;

        for(auto i = nums.begin(); i != nums.end(); ++i)
        {
            if(*i == 1)
            {
                counter++;

                if(counter > maxcount)
                {
                    maxcount = counter;
                }
            }
            else 
            {
                counter = 0;
            }
        }
        return maxcount;
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

    cout << "longest chain of 1 is: " << sol.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}