// Given a string s of length n, the task is to count the number of occurrences 
// of each prefix of the string in the entire string. 
// For a prefix defined as s[0...i] 
// (where i ranges from 0 to n-1), 
// determine how many times this prefix appears as a substring within s.
// Input: s = "abab"
// Output: [2, 2, 1, 1]
// Explanation:
// Prefix s[0...0] = "a" appears 2 times.
// Prefix s[0...1] = "ab" appears 2 times.
// Prefix s[0...2] = "aba" appears 1 time.
// Prefix s[0...3] = "abab" appears 1 time.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> substringprefix(string s)
    {
        vector<int> occurance(s.size());
        string prefix, temp;
        int count = 0;

        for(int i = 0; i < s.size(); i++)
        {
            prefix += s[i];
            for(int j = 0; s.size() - j >= prefix.size(); j++)
            {
                temp = s.substr(j, prefix.size());

                if(prefix == temp)
                {
                    count++;
                }
            }
            occurance[i] = count;
            count = 0;
        }
        return occurance;
    }
};

int main()
{
    Solution sol;
    string n;

    cout << "Enter the string: ";
    cin >> n;

    vector<int> result = sol.substringprefix(n);
    
    cout << "[";
    for(int i = 0; i < n.size() - 1; i++)
    {
        cout << result[i] << " ,";
    }
    cout << " " << result[n.size() - 1] << "]\n";

    return 0;
}