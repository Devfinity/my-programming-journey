#include <iostream>
#include <vector>
using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int single = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            single ^= nums[i];
        }

        return single;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Single number in array is: " << sol.singleNumber(nums) << endl;

    return 0;
}