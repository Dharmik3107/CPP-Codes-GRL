#include <iostream>
using namespace std;

int main()
{

    int count = 1;
    int num1;
    cout << "The Number one:";
    cin >> num1;
    int num2;
    cout << "The Number two:";
    cin >> num2;
    int num3;
    cout << "The Number three:";
    cin >> num3;

    int min = 0;
    int ans = 0;

    // Minimum number finder
    while (true)
    {
        if (num1 < num2 && num1 < num3)
        {
            min = num1;
            cout << "The minimum number is " << num1 << endl;
            break;
        }
        else if (num2 < num1 && num2 < num3)
        {
            min = num2;
            cout << "The minimum number is " << num2 << endl;
            break;
        }
        else
        {
            min = num3;
            cout << "The minimum number is " << num3 << endl;
            break;
        }
    }

    while (count <= min)
    {
        if (count == 1)
        {
            count++;
            continue;
        }
        if (num1 % count == 0 && num2 % count == 0 && num3 % count == 0)
        {
            ans = count;
        }
        if (ans != 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << ans << endl;
    return 0;
}