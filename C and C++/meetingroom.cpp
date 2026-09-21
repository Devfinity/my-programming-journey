#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        vector<int> temp;
        
        sort(intervals.begin(), intervals.end());

        for(int i = 0; i < intervals.size() - 1; ++i)
        {
            if(intervals[i][1] > intervals[i + 1][0])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the number of elements in array: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2)); //defining the interval

    cout << "Enter the intervals({0, 0}): ";
    for(int i = 0; i < n; ++i)
    {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    cout << boolalpha << sol.canAttendMeetings(intervals) << endl;

    return 0;
}