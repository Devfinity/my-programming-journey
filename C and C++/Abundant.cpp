#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAbundant(int n) {
        vector<int> divisor(n);
        int check = 0;

        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                divisor[i] = i;
            }
        }

        for(auto abundant = divisor.begin(); abundant!= divisor.end(); ++abundant)
        {
            check += *abundant;
        }

        if(check > n)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the element to check for Abundant: ";
    cin >> n;

    if(sol.isAbundant(n))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
}
