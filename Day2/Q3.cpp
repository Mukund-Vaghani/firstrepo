#include <iostream>

using namespace std;

int main()
{
    int mark;

    cout << "Enter your marks to know grad :";
    cin >> mark;

    if (mark > 80)
    {
        cout << "Your grade is A";
    }
    else if ((mark > 60) && (mark <= 80))
    {
        cout << "Your grade is B";
    }
    else if ((mark > 50) && (mark <= 60))
    {
        cout << "Your grade is C";
    }
    else if ((mark > 45) && (mark <= 50))
    {
        cout << "Your grade is D";
    }
    else if ((mark > 25) && (mark <= 45))
    {
        cout << "Your grade is E";
    }
    else if (mark < 25)
    {
        cout << "Your grade is F";
    }

    return 0;
}