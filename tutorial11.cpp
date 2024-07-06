// Algorithms
#include <iostream>
using namespace std;
// Code to sum all the natural Numbers
int main()
{
    //! Sum all natural numbers upto 10
    int sum = 0;
    for (int x = 1; x <= 10; x++)
    {
        sum = sum + x;
    }
    cout << sum << endl;

    //! First 5 Plus and rest should be minused
    int ans = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            ans = ans + i;
        }
        else
        {
            ans = ans - i;
        }
    }
    cout << ans << endl;

    //! Sum of all numbers upto given by users
    int num;
    cout << "Enter number: ";
    cin >> num;

    int total = 0;
    for (int x = 0; x <= num; x++)
    {
        total = total + x;
    }
    cout << total << endl;
    return 0;
}