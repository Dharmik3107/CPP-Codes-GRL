#include <iostream>
#include <string>
using namespace std;

int main()
{

    // (1) + (1+2) + (1+2+3) + .... + (1+2+3+..+n)
    int n = 3;
    int count = 1;
    int sum = 0;
    string pattern = "";

    while (count <= n) // 2
    {
        int pointer = 1;
        int termSum = 0;
        string aux = "(";
        while (pointer <= count) // 1
        {
            termSum += pointer;
            aux += to_string(pointer); // (1+2
            if (pointer < count)
            {
                aux += "+"; // (1+
            }
            pointer++;
        }
        aux += ")"; //(1+2)
        pattern += aux;
        if (count < n)
        {
            pattern += "+";
        }
        sum += termSum;
        count++;
    }
    cout << "Series is: " << pattern << endl;
    cout << "Sum is: " << sum << endl;
    return 0;
}