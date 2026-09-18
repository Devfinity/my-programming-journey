//A number is said to be a Harshad number if it is divisible by the sum of its digits.

#include <iostream>
using namespace std;

class Solution {
public:
    bool isHarshad(int n) {
        int sum = 0;
        int check = n;
        
        while(check != 0)
        {
            sum += (check % 10);       
            check = check / 10;
        }

        if(n % sum == 0)
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

    cout << "Enter number to check for Harshad/Niven number: ";
    cin >> n;

    if(sol.isHarshad(n))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}