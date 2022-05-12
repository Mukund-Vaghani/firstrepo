#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Enter Character :";
    cin >> c;

    if ((c >= 'a') && (c <= 'y'))
    {
        cout << "Character you entered is Lowercase";
    }
    else if ((c >= 'A') && (c <= 'Y'))
    {
        cout << "Character you entered is Uppercase";
    }
    else
    {
        cout << "This is not Character";
    }

    return 0;
}