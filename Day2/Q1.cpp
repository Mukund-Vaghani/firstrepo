#include <iostream>

using namespace std;

int main()
{
    int l, w;
    cout << "Enter length :";
    cin >> l;
    cout << "Enter Width :";
    cin >> w;

    if (l == w)
    {
        cout << "This is a Squre";
    }
    else
    {
        cout << "This is not a Squre";
    }

    return 0;
}