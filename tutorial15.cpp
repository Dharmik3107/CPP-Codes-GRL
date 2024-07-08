#include <iostream>
using namespace std;

int main()
{

    // Input number to make square
    int num;
    cout << "Enter Number:";
    cin >> num;

    // Input sign or symbol to make square of
    char sign;
    cout << "Enter Sign or Symbol: ";
    cin >> sign;

    // string step = "";
    string pattern = "";

    for (int x = 0; x < num; x++)
    {
        for (int y = 0; y < num; y++)
        {
            pattern += sign;
        }
        if (x < num - 1)
        {
            pattern += "\n"; // ####\n ####\n ####\n ####
        }
    }
    cout << pattern << endl;
    return 0;
}