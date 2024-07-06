#include <iostream>
#include <string>
using namespace std;

int main()
{

    int num;
    cout << "Enter Last number of Series";
    cin >> num;

    int sum = 0;
    int termSum = 0;
    string aux = "";
    string series = "";
    for (int i = 1; i <= num; i++)
    {
        termSum = 0;
        aux = "["; //(
        for (int j = 1; j <= i; j++)
        {
            termSum += j * j;
            aux += "(";
            aux += to_string(j) + "*" + to_string(j);
            aux += ")"; // (1+2
            if (j < i)
            {
                aux += "+"; //(1+
            }
        }
        aux += "]"; // (1+2)
        if (i < num)
        {
            aux += "+"; //(1+2)+
        }
        series += aux; //(1)+(1+2)+
        sum += termSum;
    }
    cout << series << endl;
    cout << sum << endl;
    return 0;
}

//(1*1) + (1*1 + 2*2) + (1*1 + 2*2 + 3*3) + ....