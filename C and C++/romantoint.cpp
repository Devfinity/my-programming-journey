#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) { 
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}};

        for(int i = 0; i < s.size() ; i++)
        {
            s[i] = toupper(s[i]);
            if(roman.find(s[i]) == roman.end())
            {
                return -1;
            }
        }

        int num = 0;

        for(int i = 0; i < s.size() ; i++)
        {
            if(i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]])
            {
                num -= roman[s[i]];
            }
            else
            {
                num += roman[s[i]];
            }
        }
        return num;
    }
};

int main()
{
    Solution sol;
    string s;

    cout << "Enter the Roman value: ";
    cin >> s;

    int result = sol.romanToInt(s);

    if(result == -1)
    {
        cout << "Invalid roman value!\n";
    }
    else
    {
        cout << "Integer value is: " << result << endl;
    }
    
    return 0;
}
