#include <iostream>
using namespace std;

class Solution {
public:
    string addFractions(string frac1, string frac2) {

        int pos1 = frac1.find('/');
        int num1 = stoi(frac1.substr(0, pos1));
        int den1 = stoi(frac1.substr(pos1 + 1));

        int pos2 = frac2.find('/'); //used to take values before / and after in the next two lines
        int num2 = stoi(frac2.substr(0, pos2)); //stoi converts string into int 
        int den2 = stoi(frac2.substr(pos2 + 1));

        int numerator = num1 * den2 + num2 * den1; //does the numerator sum
        int denominator = den1 * den2; //denominator math

        int a = numerator;
        int b = denominator;

        while (b != 0) { //simplifies the values if they can
            int temp = b;
            b = a % b;
            a = temp;
        }

        numerator /= a; //doing the dividing part 
        denominator /= a;

        return to_string(numerator) + "/" + to_string(denominator); 
    }
};

int main()
{
    string frac1, frac2;

    cout << "Enter first fraction: ";
    cin >> frac1;

    cout << "Enter second fraction: ";
    cin >> frac2;

    Solution obj;

    cout << "Result: " << obj.addFractions(frac1, frac2) << endl;

    return 0;
}