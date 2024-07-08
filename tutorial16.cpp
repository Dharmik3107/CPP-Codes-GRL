#include <iostream>
using namespace std;

int main()
{

    // Input number to make square
    int num = 5;
    // cout << "Enter Number:";
    // cin >> num;

    // Input sign or symbol to make square of
    string sign = "*";

    // string step = "";
    string pattern = "";
    for (int x = 1; x <= num; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            pattern += sign;
        }
        if (x < num)
        {
            pattern += "\n";
        }
    }
    cout << pattern << endl;
    return 0;
}