#include <iostream>
using namespace std;
int main()
{

    int days;
    cout << " enter the days number whats you wanted to see ()..", "\n ";
    cin >>
        days;
    switch (days)
    {
    case 1:
        cout << "saturday";
        break;

    case 2:
        cout << "sunday";
        break;

    case 3:
        cout << "monday";
        break;

    case 4:
        cout << "tuesday";
        break;

    case 5:
        cout << "wednessday";
        break;

    case 6:
        cout << "thursday";
        break;

    case 7:
        cout << "friday";
        break;

    default:
        cout << " invalid input ";
    }

    return 0;
}