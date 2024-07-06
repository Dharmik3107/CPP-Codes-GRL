#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter first number: ";
    cin >> num;
    int ans = 0;

    for (int i = 0; i <= num; i++)
    {
        ans = ans + (i * i);
    }
    cout << ans << endl;
}