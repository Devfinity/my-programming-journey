// Given two strings s and t, determine if they are isomorphic. 
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced 
// with another character while preserving the order of characters. 
// No two characters may map to the same character, but a character may map to itself.
// Example 1:
// Input : s = "egg" , t = "add"
// Output : true
// Explanation :
// The 'e' in string s can be replaced with 'a' of string t.
// The 'g' in string s can be replaced with 'd' of t.
// Hence all characters in s can be replaced to get t.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
        unordered_map<char, char> s_check;
        unordered_map<char, char> t_check;

        for(int i = 0; i < s.size(); i++)
        {
            if(s_check.find(s[i]) != s_check.end() && s_check[s[i]] != t[i])
            {
                return false;
            }
            else
            {
                s_check[s[i]] = t[i];
            }
        }

        for(int i = 0; i < t.size(); i++)
        {
            if(t_check.find(t[i]) != t_check.end() && t_check[t[i]] != s[i])
            {
                return false;
            }
            else
            {
                t_check[t[i]] = s[i];
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s, t;

    cout << "Enter the two strings: ";
    cin >> s >> t;

    cout << boolalpha << sol.isomorphicString(s, t) << endl;

    return 0;
}