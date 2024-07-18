#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 + 1+2 + 1+2+3 + 1+2+3+4 + ....
    int num = 4;
    int count = 1;
    int sum = 0;
    string pattern = "";
    do
    {
        int pointer = 1;
        int termSum = 0;
        string aux = "(";
        do
        {
            aux += to_string(pointer);
            if (pointer != count)
            {
                aux += "+";
            }
            termSum += pointer;
            pointer++;
        } while (pointer <= count);
        aux += ")";
        pattern += aux;
        if (count != num)
        {
            pattern += "+";
        }
        sum += termSum;
        count++;
    } while (count <= num);

    cout << pattern << endl;
    cout << sum << endl;
    return 0;
}