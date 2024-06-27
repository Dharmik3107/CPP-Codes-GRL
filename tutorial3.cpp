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
    int f = a < b;
    int g = a > b;
    int h = a <= b;
    int i = a >= b;
    int j = a == b;
    int k = a != b;

    //! Logical Operators &&, || , !
    bool c = true;
    bool d = false;
    bool andOp = a && b; // false
    bool orOp = c || d;  // true
    bool e = !d;

    cout << andOp << " " << orOp << " " << e << endl;
    cout << orOp << endl;

    return 0;
}

// initialization
// git init

// To add Remote account to desktop
// git remote add origin "giturl"

// To add all file to middle stage
// git add .

// To commit it to branch with message
// git commit -m "message"

// To push into remote directory
// git push -u origin master => Only for first time
// git push => from second time