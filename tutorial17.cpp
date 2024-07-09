#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 1*1 + 2*2 + 3*3 + 4*4 + ... + n*n
    int n = 10;
    int count = 1;
    int sum = 0;
    string pattern = "";

    while (count <= n)
    {
        sum += count * count;
        pattern += +"(" + to_string(count) + "*" + to_string(count) + ")";
        if (count < n)
        {
            pattern += " + ";
        }
        count++;
    }
    cout << "Series is: " << pattern << endl;
    cout << "Sum is: " << sum << endl;
    return 0;
}