#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {

        int i, j, space;
        int counter = 1;
        int counting = 2*n - 2;

        for( i = 1; i < n + 1; i++)
        {
            for(j = 0; j < i; j++)
            {
                cout << counter;
                counter++;
            }

            for(space = counting; space > 0; space--)
            {
                cout << " ";
            }

            for(j = 0; j < i; j++)
            {
                counter--;
                cout << counter;
            }
            counting -= 2;
            counter = 1;
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
    pattern.pattern1(n);

    return 0;
}