#include <iostream>
using namespace std;
int main()
{

    int a, b;
    a = 40, b = 30;
    int num;
    cout << "Enter a Number you like";
    cin >> num;
    cout << "Number: " << num << endl;

    if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else
    {
        cout << "a is not equal to b" << endl;
    }

    if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else if (a < b)
    {
        cout << "a is less than b" << endl;
    }
    else
    {
        cout << "a is greater than b" << endl;
    }

    return 0;
}