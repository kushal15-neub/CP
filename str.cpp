#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string greeting = "hello";
    std::cout << "hello";

    string str1;
    cin >> str1;

    for (int i = 0; i < str1.length(); ++i)
    {
        cout << str1[i] << " " << (int)str1[i] << "\n";
    }

    return 0;
}
