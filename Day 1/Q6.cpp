#include <iostream>

using namespace std;

int main()
{
    int m, n, o;
    cout << "enter first value :";
    cin >> m;
    cout << "enter secound value :";
    cin >> n;
    cout << "enter third value :";
    cin >> o;

    if ((m > n) && (m > o))
    {
        cout << "Largest value among three number :" << m;
    }
    else if ((n > m) && (n > o))
    {
        cout << "Largest value among three number :" << n;
    }
    else
    {
        cout << "Largest value among three value :" << o;
    }

    return 0;
}