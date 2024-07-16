#include <iostream>
using namespace std;

int main()
{
    //! DO-WHILE - Its while loop but it will run once before while executed
    int i = 5;

    while (i < 2)
    {
        cout << "Hello World" << endl;
    }

    do
    {
        cout << "Hello World" << endl;
        i--;

        if (i < 2)
        {
            break;
        }
    } while (i < 6);

    return 0;
}