#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string capitalizeFirstLast(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if((i == 0 || s[i - 1] == ' ') || (i == s.size() - 1 || s[i + 1] == ' '))
            {
                s[i] = toupper(s[i]);
            }
        }
        return s;
    }
};

int main()
{
    Solution sol;
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    string result = sol.capitalizeFirstLast(s);

    cout << result << endl;

    return 0;
}
