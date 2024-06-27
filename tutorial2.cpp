//! Derived Data Types
#include <iostream>
using namespace std;
int main()
{

    //! array
    int numbers[5] = {1, 2, 3, 4, 5};
    float nums[3] = {3.4, 5.76, 8.9};
    long long numlist[2] = {345342323324234LL, 4241241242414LL};

    //! pointers
    int *ptr;
    int val = 10;
    ptr = &val;

    cout << val << endl;
    return 0;
}
