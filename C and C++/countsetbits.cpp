//set bits  are the 1s in the bits

#include  <iostream>
using namespace std;

class Solution {
public:
    int countSetBits(int n) 
    {
        int count = 0;

        while(n != 0)
        {
            n = n & (n - 1);
            count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int n;

    cout << "Enter the number to check for number of set bits: ";
    cin >> n;

    cout << "there were " << sol.countSetBits(n) << " set bits in the number\n";
    return 0; 
}