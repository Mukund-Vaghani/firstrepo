#include <iostream>

using namespace std;

int main()
{
    int l, w;
    int p = 2;
    cout << "Enter Length of Rectangle :";
    cin >> l;
    cout << "Enter Width of Rectangle : ";
    cin >> w;

    cout << "Area of Rectangle is : " << l * w << endl;
    cout << "Perimeter of Rectangle is : " << p * (l + w);

    return 0;
}