#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int i = 1;
    string pattern = "";
    do
    {
        int j = 1;
        // string aux = "";
        do
        {
            if (j <= num - i)
            {
                pattern += " ";
            }
            else
            {
                pattern += "*";
            }
            if (j == num && i < num)
            {
                pattern += "\n";
            }
            j++;
        } while (j <= num);
        // pattern += aux;
        i++;
    } while (i <= num);
    cout << pattern << endl;
    return 0;
}
