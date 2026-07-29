#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {

        int i,j, space;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(i == 0 || i == n - 1)
                {
                    cout <<"*";
                }
            }

            if(i > 0 && i < n - 1)
            {
                cout << "*";

                for(space = n - 2; space > 0; space--)
                {
                    cout << " ";
                }
                cout << "*";
            }
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
    pattern.pattern6(n);
}