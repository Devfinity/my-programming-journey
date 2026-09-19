#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int k = 1;
        int l = 1;

        auto i = nums1.begin() + 1;
        auto j = nums2.begin() + 1;

        while(i != nums1.end() || j != nums2.end())
        {
            if(i != nums1.end())
            {
                if(*(i - 1) != *i)
                {
                    nums1[k] = *i;
                    k++;
                }
                ++i;
            }
            
            if(j != nums2.end())
            {
                if(*(j - 1) != *j)
                {
                    nums2[l] = *j;
                    l++;
                }
                ++j;
            }
        }

        i = nums1.begin();
        j = nums2.begin();

        while(i != nums1.begin() + k && j != nums2.begin() + l)
        {
            if(*i < *j)
            {
                result.push_back(*i);
                ++i;
            }
            else if(*i > *j)
            {
                result.push_back(*j);
                ++j;
            }
            else
            {
                result.push_back(*i);
                ++i;
                ++j;
            }
        }

        while(i != nums1.begin() + k)
        {
            result.push_back(*i);
            ++i;
        }

        while(j != nums2.begin() + l)
        {
            result.push_back(*j);
            ++j;
        }
        return result;
    }
};

int main()
{
    Solution sol;
    int n, m;
    cout << "Enter the size of array 1 and array 2: ";
    cin >> n >> m;

    vector<int> nums1(n);
    vector<int> nums2(m);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < nums1.size(); ++i)
    {
        cin >> nums1[i];
    }

    cout << "Enter the elements of second array: ";
    for(int i = 0; i < nums2.size(); ++i)
    {
        cin >> nums2[i];
    }

    vector<int> result = sol.unionArray(nums1, nums2);
    for (auto i = result.begin(); i != result.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\n";
}