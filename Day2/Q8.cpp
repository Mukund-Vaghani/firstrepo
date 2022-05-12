#include <iostream>

using namespace std;

int main()
{
    int i, b;
    b = 0;
    for (i = 0; i <= 10; i++)
    {
        cout << i << endl;
        b = b + i;
    }
    // b = b + i;
    cout << "Average :" << b / i;

    return 0;
}