#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Solution{
public:
    void printcup(int i) {

        int j, space;

        for(j = 0; j < 6; j++)
        {
            if(i == 0 || i == 3)
            {
                cout <<"*";
            }
        }

        if(i > 0 && i < 3)
        {
            cout << "*";

            for(space = 6 - 2; space > 0; space--)
            {
                cout << " ";
            }
            cout << "*";
        }

        for(space = 0; space < 8; space++)
        {
                cout << " ";
        }
    }

    static void choice(int n) {

        int win = (rand() % 3) + 1;

        if(win == n)
        {
            cout << "You win! \n";
        }
        else
        {
            cout << "You lost! \nPrize was under cup number " << win << "\n";
        }
    }
};

int main()
{
    int n, i, j, space;

    Solution cup;
    for(i = 0; i < 4;i++)
    {
        for(j = 0; j < 3; j++)
        {
            cup.printcup(i);
        }
        cout << "\n";
    }

    srand(time(nullptr));
    cout << "Choose your cup (1 - 3): ";
    cin >> n;
    
    if(n > 3)
    {
        cout << "Invalid cup number! Try again.\n";
        return 0;
    }
    Solution::choice(n);

    return 0;
}