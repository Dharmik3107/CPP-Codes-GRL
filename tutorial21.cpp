#include <iostream>
#include <string>
using namespace std;

int main()
{
    //! Fibonacci Sequence
    //? 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610
    int sum = 0;
    int count = 3;
    int num = 9;
    int previousTerm = 0;
    int currentTerm = 1;
    int nextTerm = 0;
    string pattern = "";

    nextTerm = previousTerm + currentTerm;
    sum += currentTerm;
    pattern += to_string(previousTerm) + " " + to_string(currentTerm);
    if (num == 2)
    {
        sum = 1;
    }
    else if (num == 1)
    {
        sum = 0;
    }
    else
    {
        while (count <= num)
        {
            pattern += " " + to_string(nextTerm);
            sum += nextTerm;
            previousTerm = currentTerm;
            currentTerm = nextTerm;
            nextTerm = previousTerm + currentTerm;
            count++;
        }
    }

    cout << pattern << endl;
    cout << sum << endl;
    return 0;
}