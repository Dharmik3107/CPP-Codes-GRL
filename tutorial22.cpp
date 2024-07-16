#include <iostream>
#include <string>
using namespace std;

int main()
{

    int num = 10;
    int sum = 0;
    string series = "";

    int i = 1;
    do
    {
        series += to_string(i) + " ";
        sum += i;
        i++;
    } while (i <= num);

    cout << series << endl;
    cout << sum << endl;

    return 0;
}