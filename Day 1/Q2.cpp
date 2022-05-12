#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "Enter Temperature value in Celsius : ";
    cin >> m;
    int n = 1.5;
    int p = 32;
    int f = (m * n) + p;
    cout << "Get value in Fahrenheit : " << f;

    return 0;
}