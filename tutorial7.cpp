#include <iostream>
using namespace std;

int main()
{
    int m, n, o;
    m = 30, n = 40, o = 20;

    if (m < n && n < o)
    { // Both should be true
        cout << "n is the middle number" << endl;
    }
    else if (m > n || m < o)
    { // if one true then code will run inslide the curly brackets of else if
        cout << "m is the middle number" << endl;
    }
    else
    {
        cout << "o is the middle number" << endl;
    }

    if (m != n)
    {
        cout << "m and n are not equal" << endl;
    }
    else
    {
        cout << "m and n are equal" << endl;
    }

    return 0;
}