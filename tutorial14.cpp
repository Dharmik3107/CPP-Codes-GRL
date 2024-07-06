#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter Number";
    cin >> num;
    string sign = "#";
    string pattern = "";
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            pattern += sign;
        } //"####"
        if (i < num - 1)
        {
            pattern += "\n"; //"####\n####\n####\n####\n"
        }
    }
    cout << pattern << endl;
    return 0;
}

// 1. User Input for Sign selection then print square pattern
/* 2. User Input for Sign selection then print triangle pattern
 *
 **
 ***
 ****
 *****
 */
