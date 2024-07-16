#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    int sum = 0;

    while (true)
    {
        int n;
        cout << "Enter Number you like";
        cin >> n;

        sum += n;

        if (n == num)
        {
            break;
        }
    }
    cout << sum << endl;
    return 0;
}

/*
! Question 1: Continuous Input from user until it matches
!given number and at the end all the wrong input number sum should be written
*/