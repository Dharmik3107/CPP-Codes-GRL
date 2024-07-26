#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int x = 2; x < num; x++)
    {
        if (num % x == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool ans = isPrime(5);
    cout << ans << endl;
    return 0;
}