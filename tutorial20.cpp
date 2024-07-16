#include <iostream>
using namespace std;

int main()
{
    int sticks;
    cout << "Enter Number of Sticks :";
    cin >> sticks;

    if (sticks > 15)
    {
        cout << "Maximum 15 Sticks allowed";
        return 0;
    }

    while (true)
    {
        //! Player One
        if (sticks == 1)
        {
            cout << "Player one is Looser";
            break;
        }
        int playerOne;
        cout << "Player One: Pick stick upto 3 :";
        cin >> playerOne;
        if (sticks -= playerOne == 0)
        {
            cout << "Player one is Looser";
            break;
        }
        else if (playerOne > 3)
        {
            cout << "Your Turn is skipped because you selected more than three";
        }
        else
        {
            sticks -= playerOne;
        }

        //! Player Two
        if (sticks == 1)
        {
            cout << "Player Two is Looser";
            break;
        }
        int playerTwo;
        cout << "Player Two:  Pick stick upto 3 :";
        cin >> playerTwo;
        if (sticks -= playerTwo == 0)
        {
            cout << "Player Two is Looser";
            break;
        }
        else if (playerTwo > 3)
        {
            cout << "Your Turn is skipped because you selected more than three";
        }
        else
        {
            sticks -= playerTwo;
        }

        //! Player Three
        if (sticks == 1)
        {
            cout << "Player Three is Looser";
            break;
        }
        int playerThree;
        cout << "Player Three: Pick stick upto 3 : ";
        cin >> playerThree;
        if (sticks -= playerThree == 0)
        {
            cout << "Player Three is Looser";
            break;
        }
        else if (playerThree > 3)
        {
            cout << "Your Turn is skipped because you selected more than three";
        }
        else
        {
            sticks -= playerThree;
        }
    }
    return 0;
}