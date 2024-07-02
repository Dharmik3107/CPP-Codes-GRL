#include <iostream>
#include <iomanip>
using namespace std; // C++ Library

int main()
{
    // Type Casting -> Chaging type of any value
    // 1. Implicit Typecasting - Automatic
    // 2. Explicit Typecasting - Manual
    //! Implicit Typecasting
    double b = 6.07;
    int a = b; // Implicit Type casting
    cout << b << " - B" << endl;
    cout << a << " - A" << endl;

    //! Explicit TypeCasting
    //* (type)value
    double c = 5.66;
    bool d = (bool)c; // Explicit Type casting
    cout << c << " - C" << endl;
    cout << d << " - D" << endl;

    int e = 7;
    float f = float(e); // Explicit Type casting
    cout << e << " - E" << endl;
    cout << fixed << setprecision(2) << f << " - F" << endl;

    //! Checking Type of Variable
    int g = 70;
    cout << typeid(g).name() << endl; // typeid(variable_name).name()

    //! Strings
    //* C Language method
    char h[] = "myStringis new"; // char variable[] = "your string";
    cout << h << endl;

    //* C++ String Class
    string i = "myStringis new one"; // string variable = "your string";
    string j("newString");           // string variable("your string");
    cout << i << endl;
    cout << j << endl;

    return 0;
}