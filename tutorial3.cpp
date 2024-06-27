//! Operators
#include <iostream>
using namespace std;

int main()
{
    //! Arithmatic Operators = +,-,*,/,%

    int a = -5;
    int b = -6;
    int sum = a - b;

    //! Relational Operators <,>,==. !=. <=, >=

    //! Logical Operators &&, || , !
    bool c = true;
    bool d = false;
    bool andOp = a && b; // false
    bool orOp = c || d;  // true
    bool e = !d;

    cout << andOp << " " << orOp << " " << e << endl;
    // cout << orOp << endl;

    return 0;
}