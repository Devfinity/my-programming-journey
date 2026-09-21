#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool confusingNumber(int n) {
      int value = n;
      int rotated = 0;

      unordered_map<int, int> Rotated = {{0, 0}, {1, 1}, {6, 9}, {8, 8}, {9, 6}};

      while(value != 0)
      {
        int digit = value % 10;

        if(Rotated.find(digit) == Rotated.end())
        {
            return false;
        }

        rotated = rotated * 10 + Rotated[digit];
        value = value / 10;
      }

      if(rotated != n)
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

    cout << "Enter the number to check if it confusing number: ";
    cin >> n;

    cout << boolalpha << sol.confusingNumber(n) << "\n";

    return 0;
}