#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int maxConsecutiveGoodNums(vector<int>& nums, vector<int>& goodNumbers) {
        int cons = 0;
        int goodnumber = 0;

        unordered_set<int> goodSet(goodNumbers.begin(), goodNumbers.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if(goodSet.count(nums[i]))
            {
                cons++;
                if(cons > goodnumber)
                {
                    goodnumber = cons;
                }
            }
            else
            {
                cons = 0;
            }  
        }
        return goodnumber;
    }
};

int main()
{
    Solution sol;

    int n, m;

    cout << "enter size for array and goodnumbers: ";
    cin >> n >> m;

    vector<int> nums(n);
    vector<int> goodNumbers(m);

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter elements of goodnumbers: ";
    for(int i = 0; i < m; i++)
    {
        cin >> goodNumbers[i];
    }

    int result = sol.maxConsecutiveGoodNums(nums, goodNumbers);
    cout << result << endl;

    return 0;
}