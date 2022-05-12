#include <iostream>

using namespace std;

int main()
{
    int divisor, divident, quotient, remainder;

    cout << "Enter divident : ";
    cin >> divident;

    cout << "Enter divisor : ";
    cin >> divisor;

    quotient = divident / divisor;
    remainder = divident % divisor;

    cout << "This is Quotient " << quotient << endl;
    cout << "This is Remainder " << remainder;

    return 0;
}