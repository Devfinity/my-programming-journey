//key thing to keep in mind is if using static we do "::"
//when using object we do "."

#include <iostream>
#include <cstdlib> //this was used for srand and rand
#include <ctime> 
using namespace std;

class Solution{
public:
    void printcup(int i) { //better to keep all of related things in solution to make it
                           // easier for you when you come back
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

    static void choice(int n) { //static is written here so we don't need to create a object
                                //use of it is in line 75 
        int win = (rand() % 3) + 1; // "+1" is there so the output won't be 0 1 2

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
        for(j = 0; j < 3; j++) //we are printing it row by row that is why it have taken a
        {                      //double in main function
            cup.printcup(i);
        }
        cout << "\n";
    }

    srand(time(nullptr)); //nullptr is taken here so we don't have to store the value of time
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