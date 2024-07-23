#include <iostream>
using namespace std;

//! Functions
/*
funcType funcName(arguments //variables without value ){
    code
    return value; // Return  type = function type
}
*/

float plusNumber(int a, float b)
{
    float sum = a + b;
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
    float ans = plusNumber(5, 6.7);
    cout << ans << endl;
    return 0;
}