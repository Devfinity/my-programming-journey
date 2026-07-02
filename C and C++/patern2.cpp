#include <iostream>
using namespace std;

class Solution {
public:
    void pattern2(int n) {

        int i, j, space;
        char c = 65;

        for( i = 1; i < n + 1; i++)
        {
            for(space = n - i; space > 0; space--)
            {
                cout << " ";
            }

            for(j = 0; j < i; j++)
            {
                cout << c;
                c++;
            }
            c--;

            for(j = 1; j < i; j++)
            {
                c--;
                cout << c;
            }
            c = 65;
            cout << "\n";    
        }
    }
};

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    Solution pattern;
    pattern.pattern2(n);
}