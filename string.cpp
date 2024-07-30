#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool validateString(string str);
string truncateString(string str);

int main()
{
    string sentence = "Hello World!";
    // cout << sentence.length() << endl;
    char words[] = "Hello World!";
    // cout << strlen(words) << endl;

    // string user = "";
    // cout << "Enter your name: ";
    // getline(cin, user);
    // cout << user << endl;
    // cout << user.length() << endl;

    // cout << validateString("Hello") << endl;
    // cout << truncateString("Hello") << endl;
    // cout << truncateString("My Name is Aksh") << endl;

    //! Creating and Initializing Strings
    string name = "Aksh";
    string surname("Kapadiya");

    //! Measuring length of string
    cout << name.size() << endl;
    cout << surname.length() << endl;

    //! Accessing Characters
    cout << surname.at(2) << endl;
    cout << surname[4] << endl;

    //! Modifying the string
    //*concating string
    surname.append("ji");
    cout << surname << endl;

    //*Inserting in string
    // name.insert(4, "a");
    // name.insert(5, "y");
    name.insert(4, "ay");
    name.insert(5, "-");
    name.insert(2, "...");

    //* Replacing string
    name.replace(2, 1, "---");
    cout << name << endl;
    name.replace(2, 5, "");
    name.replace(5, 1, "");
    cout << name << endl;

    return 0;
}

bool validateString(string str)
{
    return str.length() >= 5 && str.length() < 10;
}

//! function to check and return length of given string

int checkLength(string str)
{
    return str.length();
}

string truncateString(string str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 10) + " added";
    }
    return str;
}