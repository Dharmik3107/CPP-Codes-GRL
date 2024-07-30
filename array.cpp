#include <iostream>
using namespace std;

int main()
{
    //! Char Array
    // char varName[size] = {elements}
    char myArray[5] = {1, 6, 3, 4, 2};

    // for (int elem : myArray)
    // {
    //     if (elem > 3)
    //     {
    //         continue;
    //     }
    //     cout << elem << endl;
    // }

    const int size = 6;
    char myArr[size] = {};
    // for (int x = 0; x < size; x++)
    // {
    //     cout << "Enter " << x << "th Number:";
    //     cin >> myArr[x];
    // }

    // cout << myArr << endl;

    //! Declaration with value
    char nums[4] = {1, 2, 3, 4};
    char myVar[] = "Hello, World";

    // for (int i = 0; myVar[i] != '\0'; i++)
    // {
    //     cout << myVar[i] << endl;
    // }

    for (char elems : myVar)
    {
        if (elems == '\0')
        {
            break;
        }
        cout << elems << endl;
    }

    // CIN
    const int listSize = 10;
    char myList[listSize] = {};

    for (int x = 0; x < size; x++)
    {
        cout << "Enter " << x << " Number:";
        cin >> myList[x];
    }

    for (char elems : myList)
    {
        if (elems == '\0')
        {
            break;
        }
        cout << elems << endl;
    }

    return 0;
}
