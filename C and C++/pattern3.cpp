#include <iostream>
using namespace std;

class Solution {
public:
    void pattern3(int n) {

        int i, j;
        char c = n + 64;
        int backwards = 0;

        for( i = 1; i < n + 1; i++)
        {
            for(j = 0; j < i; j++)
            {
                cout << c;
                c++;

                if(j != i)
                {
                    cout << " ";
                }
            }
            backwards++;
            c = n + 64 - backwards;
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
    pattern.pattern3(n);
}