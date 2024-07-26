#include <iostream>
using namespace std;

//! Functions
/*
funcType funcName(arguments //variables without value ){
    code
    return value; // Return  type = function type
}
*/

// float plusNumber(int a, float b)
// {
//     float sum = a + b;
//     return sum;
// }

//! Function with if Else
bool conditionalFunction(int a, int b)
{
    int sum = a - b;

    if (sum > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//! Function with Loops
int calculateSum(int num)
{
    int sum = 0;
    for (int x = 0; x <= num; x++)
    {
        sum += x;
    }
    return sum;
}

//! Plus
//* int, int
//* int, float
//* float, float
//* int, int, int, float

//! Minus

int main()
{
    float ans = calculateSum(10);
    cout << ans << endl;
    return 0;
}