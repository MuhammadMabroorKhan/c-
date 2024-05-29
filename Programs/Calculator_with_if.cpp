#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char p;
    cout << "Enter 1st number => ";
    cin >> a;
    cout << "Enter 2nd number => ";
    cin >> b;
    cout << "Enter an operator => ";
    cin >> p;
    cout << "Result =>";
    if (p == '+')
        cout << a + b << endl;
    else if (p == '-')
        cout << a - b << endl;
    else if (p == '*')
        cout << a * b << endl;
    else if (p == '/')
        cout << a / b << endl;
    else if (p == '%')
        cout << a % b << endl;
    else
        cout << "Invalid Operator" << endl;

    system("PAUSE");
    return 0;
}