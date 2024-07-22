#include <iostream>
using namespace std;

int main()
{
    int n = 5, s, x, y;
    string sign = "*";

    // Input size of the triangle
    // cout << "Enter the number of rows to show the pattern: ";
    // cin >> n;

    // Input the character to be used for printing
    // cout << "Enter the character to be used: ";
    // cin >> sign;

    // Initialize x to 1 for the do-while loop
    x = n;

    // Loop to generate the pattern
    do
    {
        // Print leading spaces // x = 1
        s = n; // s = 1
        do     // 1 < 6 _ _ _ _ _
        {
            cout << "_";
            s--;
        } while (s >= x);

        // Loop for displaying the character
        y = x;
        do
        {
            cout << sign << "_"; // * _
            y--;
        } while (y >= 1);

        // Move to the next line
        cout << "\n";

        // Increment x for the next iteration
        x--;
    } while (x >= 1);

    return 0;
}