#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two value for swaping :";
    cin >> a;
    cout << "and ";
    cin >> b;
    cout << "Before swapping the value of a is " << a << endl
         << "and value of b is " << b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl
         << "After swapping the value of a is " << a << endl
         << "and value of b is " << b;

    return 0;
}