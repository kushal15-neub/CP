#include <iostream>
using namespace std;
int main()
{
    // bool kushalisthebest = true;
    // bool heisnotbest = false;
    // cout << kushalisthebest << " ";
    // cout << heisnotbest << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "hi"
    //          << " ";
    //     cout << "hey"
    //          << " ";
    //     continue;

    //     cout << "bye";
    // }

    // for (int i = 0; i <= 15; i += 2)
    // {

    //     cout << i << " ";
    //     if (i & 1)
    //     {

    //         continue;
    //     }

    //     i++;
    // }

    for (int i = 0; i < 5; i++)

    {
        for (int j = i; j <= 5; j++)
        {
            cout << j << " " << endl;
        }
    }
    //// multiple variable (same named) can't be stored in a main function.it occurs error !. 
    ///so,the solution is we can use block .thus ,we can avoid error .
    ///don't understand ? then follow number 56 to 63 line.
    int a = 10;
    cout << a;
    if (true)
    {
        a = 1;
        cout << a;
    }
    int b = 2;
    cout << b;
    if (1)
    {
        b = 3;
        cout << b;
        if (1)
        {
            cout << b;
            if (1)
            {
                cout << b;
            }
        }
    }
}