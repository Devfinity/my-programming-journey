#include <iostream>
using namespace std;

class Solution {
public:
    void pattern5(int n) {

        int i, j, space;
        int counting = 2*n - 2;
        int upper = 2;

        for( i = 0; i < n; i++)
        {
            for(j = 0; j <= i; j++)
            {
                cout << "*";
            }

            for(space = counting; space > 0; space--)
            {
                cout << " ";
            }

            for(j = 0; j <= i; j++)
            {
                cout << "*";
            }
            counting -= 2;
            cout << "\n";
        }

        for( i = n - 1; i > 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                cout << "*";
            }

            for(space = 0; space < upper; space++)
            {
                cout << " ";
            }

            for(j = 0; j < i; j++)
            {
                cout << "*";
            }
            upper += 2;
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
    pattern.pattern5(n);
}