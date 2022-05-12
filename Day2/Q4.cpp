#include <iostream>

using namespace std;

int main()
{
    int class_number, class_attended;
    cout << "Enter Number of classes Held in Sem :";
    cin >> class_number;
    cout << "Enter Number of classes attended by You :";
    cin >> class_attended;

    int p;
    p = ((class_attended * 100) / class_number);
    cout << "percentage of attendece :" << p << "%";

    if (p < 75)
    {
        cout << endl
             << "You are not be allowed to sit in Exam";
    }
    else
    {
        cout << endl
             << "You are allowed to sit in Exam";
    }

    return 0;
}
