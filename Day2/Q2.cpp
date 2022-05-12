#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Enter Quantity what you have to purchase :";
    cin >> i;

    int p;
    p = i * 100;
    cout << "Total Price of your purchase quantity is :" << p;

    if (p >= 1000)
    {
        cout << endl
             << "You get 10% discount from our shope.";
    }
    else
    {
        cout << endl
             << "You are not able to get discount from our shope.";
    }

    return 0;
}