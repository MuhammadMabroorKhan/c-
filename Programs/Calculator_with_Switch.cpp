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
    cout << "Result => ";
    switch (p)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid Operator" << endl;
    }
    system("PAUSE");
    return 0;
}