#include <iostream> // Pre processor => To inform the compiler to add input output library before compiling the code
using namespace std;

int main() // Entry point of any C++ Code. Program Execution Start from the main
{
    // Variables

    // Declare a variable
    // type variableName;

    int age;
    float balance;

    // Initialize a Variable
    // type variableName = value;

    int myAge = 16;
    float myBalance = 4.89;

    int a = 2;
    short b = 25;
    long c = 100000L;
    long long d = 7000000LL;
    unsigned int e = 50;

    float weight = 65.6f;
    double pi = 3.14159265;
    long double preciseValue = 2.78908689689L;

    cout << e << endl;
    cout << myAge << endl;
    cout << "Hello World!"; // std::cout is used to output the data to the console , << Insertion Operator
    return 0;
}

//! Data Types

// Premitive Data Types
// Derived Data Types
// User-defined Data Types

//! Primitives

//*Integer
// int - for integer - 4 byte numbers
// Range of Integer Numbers - -2147483648 to 2147483647
// short - below range of Int - 2 byte number
// long - above range of Int - 4/8
// long long - above the range of long - 8 bytes
// unsigned - for non-negative

//*Float
// float - single precision floating point
// double - double precision floating point
// long double - Extended precision floating point