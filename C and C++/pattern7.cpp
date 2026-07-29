#include <iostream>
using namespace std;

class Solution {
public:
    void pattern7(int n) {

        int i, j, top, left, bottom, right;
        int numbers = 2*n - 1;

        for(i = 0; i < numbers; i++)
        {
            for(j = 0; j < numbers; j++)
            {
                top = i;
                left = j;
                bottom = numbers - i - 1;
                right = numbers - j - 1;

                int smallest = top;

                smallest = min(smallest, left);
                smallest = min(smallest, bottom);
                smallest = min(smallest, right);

                cout << n - smallest << " ";

                //hardcoded way
                // if(top <= left && top <= bottom && top <= right)
                // {
                //     cout << n - top << " ";
                // }
                // else if(left <= top && left <= bottom && left <= right)
                // {
                //     cout << n - left << " ";
                // }
                // else if(bottom < top && bottom < left && bottom < right)
                // {
                //     cout << n - bottom << " ";
                // }
                // else
                // {
                //     cout << n - right << " ";
                // }
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
    pattern.pattern7(n);
}