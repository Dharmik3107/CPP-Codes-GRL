#include <iostream>
#include <string>
using namespace std;

//* ? = ternary Operator
// string findAndReplace(string str, string word, string newWord)
// {
//     int index = str.find(word);
//     str.erase(index, word.length());
//     str.insert(index, newWord);
//     return str;
// }

int coutWord(string str)
{

    int wordCount = 0;
    bool wordStart = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && wordStart == false)
        {
            cout << "Loop Count: " << i << " str[i]: " << str[i] << endl;
            wordStart = true;
            wordCount++;
        }
        else if (wordStart = true && str[i] == ' ')
        {
            wordStart = false;
        }
    }
    return wordCount;
}

int main()
{
    int count = coutWord("    g    gd  h f g h  h    "); // g   gh   h // g h j k
    cout << count << endl;
    return 0;
}