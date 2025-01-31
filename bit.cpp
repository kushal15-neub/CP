#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 4, b = 6;
    cout << "a&b ::" << (a & b) << endl;
    cout << "a|b ::" << (a | b) << endl;
    cout << "~a ::" << (~a) << endl;
    cout << "a^b ::" << (a ^ b) << endl;

    // cout << (17 >> 1) << endl;
    // cout << (17 >> 2) << endl;
    // cout << (19 << 1) << endl;
    // cout << (19 >> 1) << endl;

    int i = 85;
    cout << (++i) << endl; ///
    cout << (i++) << endl; ///
    cout << (i--) << endl; ///

    cout << (--i) << endl; ///

    float x = 12.33F;
    long double y = 11.88L;
    cout << x << endl;
    cout << y << endl;

    cout << "The size of  12.33 is ::" << sizeof(12.33) << endl;
    cout << "The size of  12.33f is :: " << sizeof(12.33f) << endl;
    cout << "The size of  12.33F is  ::" << sizeof(12.33f) << endl;
    cout << "The size of  11.88 is :: " << sizeof(11.88) << endl;
    cout << "The size of  11.88l is ::" << sizeof(11.88l) << endl;
    cout << "The size of  11.88L is :: " << sizeof(11.88L) << endl;
    cout << "the value of x in int is :::" << (int)x << endl;
    cout << "the value of x in int is :::" << (int)y << endl;

    int k = 111;

    int &l = k;
    cout << "the reference value of y is :::" << l << endl;

    const int f = 34;
    //// f = 1;
    cout << "the value of f wass  :::" << f << endl;
    int g = 54;
    cout << "the value of f is  :::" << g << endl;

    int z = 13, v = 344, n = 455;
    cout << "the value of z without setw  is " << z << endl;
    cout << "the value of v without setw  is " << v << endl;
    cout << "the value of n without setw  is " << n << endl;

    cout << "the value of z with setw  is " << setw(4) << z << endl;
    cout << "the value of v with setw  is " << setw(4) << v << endl;
    cout << "the value of n with setw  is " << setw(4) << n << endl;
}