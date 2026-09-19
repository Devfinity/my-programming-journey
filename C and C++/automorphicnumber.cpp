//Given a positive integer N, determine whether it is an Automorphic Number.
//A number is called an Automorphic Number if the square of the number ends with the number itself.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAutomorphic(long n) {
        long value = n;
        vector<int> check;
        vector<int> check1;
        long area = n*n;
        
        while(value != 0)
        {
            check1.push_back(value % 10);
            value = value / 10;
        }

        while(area != 0)
        {
            check.push_back(area % 10);
            area = area / 10;
        }
        
        for(int i = 0; i < check1.size(); ++i)
        {
            if(check[i] != check1[i])
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
    long n;

    cout << "Enter the number to check if it is automorphic: ";
    cin >> n;

    if(sol.isAutomorphic(n))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}