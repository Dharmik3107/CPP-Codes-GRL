#include <iostream>
using namespace std;

int main()
{
    //! Char Array
    // char varName[size] = {elements}
    char myArray[5] = {1, 6, 3, 4, 2};

    for (int elem : myArray)
    {
        if (elem > 3)
        {
            continue;
        }
        cout << elem << endl;
    }

    const int size = 6;
    char myArr[size] = {};
    for (int x = 0; x < size; x++)
    {
        cout << "Enter " << x << "th Number:";
        cin >> myArr[x];
    }

    cout << myArr << endl;
    return 0;
}
